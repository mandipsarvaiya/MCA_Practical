package Extra;
import java.util.*;

class Book{
    String bname,author;
    int price;

    void getDetails(){
        Scanner sc = new Scanner(System.in);

        System.out.println("book name");
        bname=sc.nextLine();
        System.out.println("author name");
        author=sc.next();
        System.out.println("price");
        price=sc.nextInt();
    }
    void displayDetails(){
        System.out.println("book name is"+bname);
        System.out.println("author name is"+author);
        System.out.println("price"+price);
    }
}
public class Demo {
 
    public static void main(String[] args)
    {
        Book b1=new Book();

        b1.getDetails();
        b1.displayDetails();

    }
}

