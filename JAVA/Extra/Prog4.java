package Extra;
import java.util.*;
public class Prog4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String choice="+";
        
        int a = sc.nextInt();
        int b = sc.nextInt();


        switch (choice) {
            case "+":
                    System.out.println("add"+(a+b));
                break;
        
            default:
                break;
        }
    }
}
