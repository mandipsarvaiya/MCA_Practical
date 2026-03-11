package Extra;
public class StudentString {
    public static void main(String[] args) {
        Object o = new String("GetClassMethodDemo");
        Class c = o.getClass();
        System.out.println("class of object is "+c.getName());
    }
}