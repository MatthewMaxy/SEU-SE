import java.util.LinkedList;
import java.util.Queue;
class Command
{
    String str;
    Command(String str1)
    {str=str1;}
    void operation(){System.out.println(str);}
}
class Command2
{
    Queue f()
    {
        Queue queue=new LinkedList();
        queue.add(new Command("111"));
        queue.add(new Command("222"));
        queue.add(new Command("333"));
        queue.add(new Command("444"));
        queue.add(new Command("555"));
        return queue;

    }
}
class Command3{
    public void consume(){
        Queue<Command> queue=new LinkedList<>();
        queue=new Command2().f();
        for(Command command:queue)
        {
            command.operation();
        }
    }
}


public class Q10 {
    public static void main(String[] args) {
        Command3 command3=new Command3();
        command3.consume();
    }

}
