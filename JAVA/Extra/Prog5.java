package Extra;
import java.util.*;

class Book{
    String name;
    int id;
    

    Book()
    {
        System.out.println("default constrouctor");
    }
    Book(String name,int id){
        this.name=name;
        this.id=id;
    }

    void getDetails(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter name");
        name=sc.next();
        System.out.println("Enter id");
        id=sc.nextInt();
    }
    
    void displayDetails(){
        System.out.println("name is"+name);
        System.out.println("id is "+id);
    }
}
public class Prog5{
 
    public static void main(String[] args)
    {
        String name="mandip";
        int id=10;
       Book b1 = new Book(name,id);
    

       
       b1.displayDetails();
    }
}

