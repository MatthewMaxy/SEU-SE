import java.awt.*;
import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.sql.*;
import java.util.ArrayList;
import java.util.Objects;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Sever {
    ServerSocket serverSocket;
    int severPort=7777;
    static JDBC jdbc;
    public Sever(){
       try{
            serverSocket = new ServerSocket(severPort);
            jdbc= new JDBC();
            System.out.println("启动成功!");
       }catch (Exception e)
       {
           System.out.println("启动失败!");
           System.exit(0);
       }
    }
    private void listen(){
        while(true){
            try{
                Socket client = serverSocket.accept();
                new ClientThread(client).start();
            }catch (IOException e)
            {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) throws Exception {
        ExecutorService exec = Executors.newCachedThreadPool();
        exec.execute(() -> new Sever().listen());
    }
    private static class ClientThread extends Thread{
        Socket socket;
        BufferedReader rd=null;
        PrintWriter printWriter=null;
        public ClientThread(Socket socket){
            this.socket=socket;
            try {
                rd = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            try {
                printWriter=new PrintWriter(socket.getOutputStream());
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        @Override
        public void run() {
            while (true) {
                String line;
                try {
                    line = rd.readLine();
                } catch (IOException e) {
                    continue;
                }
                if (Objects.equals(line, "write")) {
                    ArrayList<String> arr = new ArrayList<>();
                    try {
                        int size = Integer.parseInt(rd.readLine());
                        for (int i = 0; i < size; i++)
                            arr.add(rd.readLine());
                        jdbc.WriteToDB(arr);
                        System.out.println("数据库已更新！");
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
                if (Objects.equals(line, "read")) {
                    ArrayList<String> arr = jdbc.ReadFromDB();
                    printWriter.write(arr.size() + "\n");
                    for (String s : arr)
                        printWriter.write(s + "\n");
                    printWriter.flush();
                }
            }
        }
    }
    static class JDBC {
        Connection connection;
        Statement statement;

        public JDBC() throws Exception {
            Class.forName("com.mysql.cj.jdbc.Driver");
            connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/java", "root", "123456");
            statement = connection.createStatement();
        }

        public ArrayList<String> ReadFromDB() {
            System.out.println("Read From DataBase！");
            ArrayList<String> array = new ArrayList<>();
            try {
                ResultSet resultSet = statement.executeQuery("select * from student");
                while (resultSet.next()) {
                    String line = resultSet.getNString("id") + "," + resultSet.getString("name") + ","
                            + resultSet.getString("gender") + "," + resultSet.getString("school");
                    array.add(line);
                }
            } catch (SQLException e) {
                e.printStackTrace();
            }
            return array;
        }
        public void WriteToDB(ArrayList<String> arr) {
            try {
                statement.execute("truncate table student");
            } catch (SQLException e) {
                e.printStackTrace();
                return;
            }
            for (String s : arr) {
                String[] student = s.split(",");
                try {
                    statement.executeUpdate("insert into student(id) values ('" + student[0].trim() + "')");
                    statement.executeUpdate("update student set name = '" + student[1].trim() + "' where id = '"
                            + student[0] + "';");
                    statement.executeUpdate("update student set gender = '" + student[2].trim() + "' where id = '"
                            + student[0] + "';");
                    statement.executeUpdate("update student set school = '" + student[3].trim() + "' where id = '"
                            + student[0] + "';");
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}