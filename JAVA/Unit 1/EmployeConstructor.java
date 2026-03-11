import java.util.*;

public class EmployeConstructor{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name = ");
        String name = sc.next();
        System.out.print("Enter age = ");
        int age = sc.nextInt();

        Employee e1 = new Employee(name, age);
        System.err.println("Exploye name is "+e1.name);
        System.err.println("Exploye name is "+e1.age);
    }
}

class Employee{
    String name;
    int age;

    Employee(){
        System.out.println("default constructor is called");
    }
    Employee(String name){
        this.name = name;
        System.out.println("Name Stored in object");
    }
    Employee(String name, int age){
        this.name = name;
        this.age = age;
        System.out.println("Name and age is stored");
    }
}
