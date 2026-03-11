public class C {
    public static void main(String[] args){
        B obj = new B();
    }
}

class A{
    A(B obj){
        System.out.println("Constructor A");
    }
}
class B{
    B(){
        System.out.println("Constructor B");
        A a = new A(this);
    }
}
