import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JDialog;
import java.awt.GridLayout;
import java.awt.Panel;

import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.io.*;
import java.util.Vector;

import java.net.*;

public class TestDialog extends JDialog {
    Socket socket;
    String filePath = "in.txt";
    Client network = null;
    JLabel idLabel = new JLabel("学号");
    JLabel nameLabel = new JLabel("姓名");
    JLabel genderLabel = new JLabel("性别");
    JLabel schoolLabel = new JLabel("学院");
    JButton cancelButton = new JButton("Cancel");
    JButton add = new JButton("添加");
    JButton modify = new JButton("修改");
    JButton delete = new JButton("删除");
    JButton cout = new JButton("显示");
    Vector<Student> student = new Vector<Student>();
    boolean netConnection = true;
    private final JTextField id = new JTextField();
    private final JTextField name = new JTextField();
    private final JTextField gender = new JTextField();
    private final JTextField school = new JTextField();
    public TestDialog() {

        try {
            System.out.println("……尝试网络连接中……");
            network = new Client();
        } catch (IOException e) {
            netConnection = false;
        }
        if (netConnection) {
            network.ReadFromNet();
            System.out.println("网络连接成功，读取数据库数据");
        } else {
            System.out.println("网络未连接，读取本地数据");
            readFromFile();
        }


        setBounds(100, 100, 450, 300);
        Panel input = new Panel(new FlowLayout());
        input.add(idLabel);
        input.add(id);

        input.add(nameLabel);
        input.add(name);

        input.add(genderLabel);
        input.add(gender);

        input.add(schoolLabel);
        input.add(school);

        id.setColumns(10);
        name.setColumns(10);
        gender.setColumns(10);
        school.setColumns(10);

        Panel button = new Panel(new FlowLayout());

        button.add(add);
        button.add(modify);
        button.add(delete);
        button.add(cancelButton);
        button.add(cout);

        add.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                for (Student a : student)
                    if (a.id.equals(id.getText())) {
                        System.out.println("该学号已存在！请选择修改信息或修正学号后添加！");
                        return;
                    }
                Student a = new Student(id.getText(), name.getText(), gender.getText(), school.getText());
                student.add(a);
                System.out.println("添加成功！");
                save();
            }
        });

        modify.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                for (Student a : student)
                    if (a.id.equals(id.getText())) {
                        a.school = school.getText();
                        a.name = name.getText();
                        a.gender = gender.getText();
                        System.out.println("修改成功！");
                        save();
                        return;
                    }
                System.out.println("需修改信息不存在！");
            }
        });

        delete.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                for (Student a : student)
                    if (a.id.equals(id.getText())) {
                        student.remove(a);
                        System.out.println("成功删除");
                        save();
                        return;
                    }
                System.out.println("未找到该学号，删除失败");
            }
        });

        cancelButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                id.setText("");
                name.setText("");
                gender.setText("");
                school.setText("");
            }
        });
        cout.addActionListener(new ActionListener() {

            public void actionPerformed(ActionEvent e) {
                System.out.println("所有学生信息：");
                for (Student a : student) {
                    System.out.println("\t学号：" + a.id + "\t姓名：" + a.name + "\t性别：" + a.gender + "\t学院：" + a.school);
                }
            }
        });
        setLayout(new GridLayout(2, 1, 2, 2));
        add(input);
        add(button);
        setDefaultCloseOperation(JDialog.DISPOSE_ON_CLOSE);
        setVisible(true);

        addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                save();
                System.exit(0);
            }
        });



    }
    public void save()
    {
        if (netConnection) {
            network.WriteToNet();
        } else {
            writeToFile();
        }
    }
    /**
     * Launch the application.
     */
    public static void main(String[] args) {
        try {
            SwingUtilities.invokeLater(new Runnable() {
                public void run() {
                    TestDialog dialog = new TestDialog();
                }
            });

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void writeToFile() {
        try (BufferedWriter out = new BufferedWriter(new FileWriter(filePath))) {
            for (Student m : student) {
                out.write(m.id + "," + m.name + "," + m.gender + "," + m.school + "\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void readFromFile() {
        try (BufferedReader in = new BufferedReader(new FileReader(filePath))) {
            String a;
            while ((a = in.readLine()) != null) {
                String[] m = a.split(",");
                Student tem = new Student(m[0].trim(), m[1].trim(), m[2].trim(), m[3].trim());
                student.add(tem);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public class Student {
        String id, name, gender, school;

        Student() {
            id = "";
            name = "";
            gender = "";
            school = "";
        }

        Student(String id, String name, String gender, String school) {
            this.id = id;
            this.name = name;
            this.gender = gender;
            this.school = school;
        }

        public String toString() {
            return (this.id + "," + this.name + "," + this.gender + "," + this.school + "\n");
        }

    }

    private class Client {
        final Socket socket;
        final PrintWriter out;
        final BufferedReader bufferedReader;

        public Client() throws IOException {
            String serverAddr = "localhost";
            int serverPort = 7777;
            socket = new Socket(serverAddr, serverPort);
            out = new PrintWriter(socket.getOutputStream());
            bufferedReader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            System.out.println("服务器连接成功!");
        }

        public void WriteToNet() {
            out.write("write\n");
            out.write(student.size() + "\n");
            for (Student s : student)
                out.write(s.toString());
            out.flush();
        }

        public void ReadFromNet() {
            out.write("read\n");
            out.flush();
            try {
                int size = Integer.parseInt(bufferedReader.readLine());
                for (int i = 0; i < size; i++) {
                    String line = bufferedReader.readLine();
                    String[] contains = line.split(",");
                    Student s = new Student(contains[0].trim(), contains[1].trim(),
                            contains[2].trim(), contains[3].trim());
                    student.add(s);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }

}
