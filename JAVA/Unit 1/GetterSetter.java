import java.util.*;

public class GetterSetter {
    public static void main(String[] args){
        Student s1 = new Student();
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter student id = ");
        int id = sc.nextInt();
        System.out.print("Enter student name = ");
        String name = sc.next();

        s1.setId(id);
        s1.setName(name);

        System.out.println(s1.getId());
        System.out.println(s1.getName());
    }
}

class Student{
    private int id;
    private String name;

    int getId(){
        return id;
    }
    String getName(){
        return name;
    }
    void setId(int id){
        this.id = id;
    }
    void setName(String name){
        this.name = name;
    }
}