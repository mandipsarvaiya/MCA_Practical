package Extra;
public class Prog10 {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        int sumInt = c.add(2, 4);
        float sumFloat = c.add(2.2f, 4.2f);
        System.out.println("Sum of int is = "+ sumInt);
        System.out.println("Sum of float is = "+ sumFloat);
    }
}

class Calculator{
    int add(int a, int b){
        System.out.println("Int Method");
        return a+b;
    }
    float add(float a, float b){
        System.out.println("Float Method");
        return a+b;
    }
}
