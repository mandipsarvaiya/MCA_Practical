public class StaticDemo {
    public static void main(String []args){
        System.out.println(Student.college);
        Student.display(10,20);
    }
}

class Student {
    static String college = "LJ";
    String name;

    Student(String name) {
        this.name = name;
    }

    static void display(int a, int b){
        System.out.println("static method called "+ (a+b));
    }

    static{
        System.out.println("Static bloack called");
    }
}
