
class Student {
    String name;
    int age;

    static String clg = "lj";

    // {
    //     System.out.println("helloooooo how are you");
    // }
    static void Display(){
        System.out.println(clg);
    }

    Student(String name,int age){
        System.out.println("paramitrize constrcotor");
        this.name=name;
        this.age=age;
    }


    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("------------------");
    }
}

public class Prog7 {
    public static void main(String[] args) {

        // String name="man";
        // int age=101;
        // Student s1 = new Student(name,age);
        // s1.display();
        
        
        Student.Display();
    }
}

