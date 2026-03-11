import java.util.*;

public class MethodOverloading {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter Num1 = ");
        int num1 = sc.nextInt();
        System.out.print("Enter Num2 = ");
        int num2 = sc.nextInt();
        System.out.print("Enter Num3 = ");
        int num3 = sc.nextInt();

        SumOperation s1 = new SumOperation();
        int sum  = s1.sum(num1, num2, num3);
        System.out.println(sum);
    }
}


class SumOperation{
    int sum(int a, int b){
        System.err.println("first");
        return a+b;
    }
    int sum(int a, int b, int c){
        System.err.println("second");
        return a+b+c;
    }
    double sum(double a, double b){
        System.err.println("third");
        return a+b;
    }
    double sum(double a, double b, double c){
        System.err.println("fourth");
        return a+b+c;
    }
}