import Extra.Demo;

public class InterfaceDemo {
    public static void main(String[] args) {
        C d1 = new Demo();
        d1.A_method();
        d1.B_method();
        d1.C_method();
        System.out.println("Value of a is "+A.a);
        d1.A_default();
        A.A_static();
    }
}

interface A{
    static final int a = 10;
    public void A_method();

    default public void A_default(){
        System.out.println("This is default method of interface A");
    }
    static public void A_static(){
        System.out.println("This is static method of interface A");
    }
}

interface B{
    public void B_method();
}

interface C extends A, B{
    public void C_method();
}

class Demo implements C{
    public void A_method(){
        System.out.println("This is A method");
    }
    public void B_method(){
        System.out.println("This is B method");
    }
    public void C_method(){
        System.out.println("This is C method");
    }
}
