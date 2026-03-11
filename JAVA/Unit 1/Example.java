import java.util.Scanner;

public class Example {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int length;
        System.out.println("Enter length");
        length = sc.nextInt();
        Demo d[] = new Demo[length];

        for(int i=0; i<length; i++){
            System.out.println("Enter number of ");
        }
    }
}

class Demo{
    int id;
    String name;

    Demo(){
        System.out.println("Default construtor is called");
    }
    Demo(int id, String name){
        this.id = id;
        this.name = name;
        System.out.println("Value Assigned");
    }
    void display(){
        System.out.println("id is = " + id);
        System.out.println("name is = " + name);
    }
}

