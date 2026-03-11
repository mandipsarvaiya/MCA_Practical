
public class ThrowDemo {
    public static void main(String[] args) {
        try {
            System.out.println("inside try b.ock");
            throw new ArithmeticException("connot divide by zero");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
