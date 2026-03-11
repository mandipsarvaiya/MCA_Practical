public class MethodOverloadingInheritance {
    public static void main(String[] args) {
        K1 k = new K1();
        k.hello("renil");
    }
}

class T1{
    void hello(String s){
        System.out.println("I1 = "+ s);
    }
}

class J1 extends T1{
    void hello(String s){
        super.hello(s);
        System.out.println("J1 = " + s);
    }
}

class K1 extends J1{
    void hello(String s){
        super.hello(s);
        System.out.println("K1 = "+ s);
    }
}