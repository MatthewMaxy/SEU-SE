class Cache{
private:
    int *arr;
    const long capacity;
    bool dirty;
public:
    Cache(long size_max)
        :capacity(size_max), size(0){
            arr = new int[size_max];
            dirty = false;
    }
    void allZero(){
        for(int i=0;i<capacity;++i)
           arr[i] = 0;
        size = capacity;
    }
    int& get(int index){
        return arr[index];
    }
    void set(int index, int value){
        arr[index] = value;
        dirty = true;
    }
    int getcapacity(){
        return capacity;
    }
    bool getdirty(){
        return dirty;
    }
    void setdirty(bool dir){
        dirty = dir;
    }
    long size;
    int *&getArr() {
        return arr;
    }
};