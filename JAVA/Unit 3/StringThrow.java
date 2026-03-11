import java.util.*;

public class StringThrow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String password = sc.next();

        try {
            int lenght = password.length();
            if(lenght<6){
                throw new IllegalArgumentException("Length is less then 6");
            } else{
                System.out.println("Password is Accepted");
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
            
        }
    }
}
