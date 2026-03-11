package Extra;
import java.util.Scanner;

import Student;

public class Prog12 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.getValue();
        s1.display();
    }
}

class Student{
    String name;
    int age;

    void getValue(){
        Scanner sc = new Scanner(System.in);
        name = sc.next();
        age = sc.nextInt();
    }

    void display(){
        System.out.println("name is "+name+" age is "+ age);
    }
}

