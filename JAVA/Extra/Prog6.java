
class Student {
    String name;
    int age;

    {
        System.out.println("helloooooo how are you");
    }

    Student(String name,int age){
        System.out.println("paramitrize constrcotor");
        this.name=name;
        this.age=age;
    }

  
    Student(Student s){
        System.out.println("copy constorctor");
        this.name=s.name;
        this.age=s.age;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("------------------");
    }
}

public class Prog6 {
    public static void main(String[] args) {

        String name="man";
        int age=101;
        Student s1 = new Student(name,age);

        Student s2= new Student(s1);
        s1.display();
        s2.display();
    }
}

