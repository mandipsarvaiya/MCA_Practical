public class NestedClass {
    public static void main(String []args){
        Nested n = new Nested();
        Nested.Inner i = n.new Inner();
        n.displayId();
        i.display();
    }
}

class Nested{
    int a = 10;
    class Inner{
        void display(){
            System.out.println("inner class is called");
        }
    }
    void displayId(){
        System.out.println("Outer class is called a = "+ a);
    }
}
