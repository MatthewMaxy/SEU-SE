#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

using namespace std;

#define SHARE_MEMORY_BUFFER_LEN 1024

struct stuShareMemory{
    int iSignal;
    char chBuffer[SHARE_MEMORY_BUFFER_LEN];

    stuShareMemory(){
        iSignal = 0;
        memset(chBuffer,0,SHARE_MEMORY_BUFFER_LEN);
    }
};

void writeToShare(int a,stuShareMemory* stu,int i){
    stu->iSignal = 0;
    if(stu->iSignal != 1){
        memcpy(stu->chBuffer+i*4, &a, 4);
        stu->iSignal = 1;
    }
    else{
        sleep(10);
    }
}

int main() {
    void *shm = NULL;
    struct stuShareMemory *stu;
    int shmid = shmget((key_t)1234, sizeof(struct stuShareMemory), 0666|IPC_CREAT);
    if(shmid == -1)
    {
        printf("shmget err.\n");
        return 0;
    }
    shm = shmat(shmid, (void*)0, 0);
    if(shm == (void*)-1)
    {
        printf("shmat err.\n");
        return 0;
    }
    stu = (struct stuShareMemory*)shm;
    int f0=0,f1=1,f2;
    int n;
    cin>>n;
    if(n<2){
        cerr<<"nead a number >= 2";
    }
    pid_t pid;
    pid = fork();
    if (pid < 0){
        cerr<<"error";
        exit(0);
    }
    //根据pid是否大于0判断是父进程还是子进程
    if (pid == 0) {
        writeToShare(0,stu,0);
        writeToShare(1,stu,1);
        for(int i=2;i<=n-1;++i)
        {
            f2=f0+f1;
            f0=f1;
            f1=f2;
            writeToShare(f2,stu,i);
        }
        cout<<"child process competed"<<endl;
        printf("current txt : %s", stu->chBuffer);
        shmdt(shm);
    }
    else {

        wait(NULL);
        if(stu->iSignal != 0)
        {
            printf("current txt : %s", stu->chBuffer);
            stu->iSignal = 0;
        }
        else
        {
            sleep(10);
        }
        shmdt(shm);
        shmctl(shmid, IPC_RMID, 0);
        cout<<"Parent process competed"<<endl;
    }
    return 0;
}
