import java.util.*;
public class P21 {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String name =sc.next();
        System.out.println(Utility.toUpperCaseString(name));

    }
}

class Utility{
    static String toUpperCaseString(String name){
        return name.toUpperCase();
    }
}