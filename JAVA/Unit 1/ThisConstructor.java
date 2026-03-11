public class ThisConstructor {
    public static void main(String[] args){
        Demo d = new Demo();
    }
}

class Demo{
    Demo(){
        this(11);
        System.out.println("default construtor called");
    }
    Demo(int a){
        System.out.println("parameterize constructor called "+ a);
    }
}
