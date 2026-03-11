public class CopyConstructor {
    public static void main(String[] args){
        Complex c1 = new Complex(10, "renil");
        Complex c2 = new Complex(c1);

        System.out.println(c2);
    }
}

class Complex{
    int id;
    String name;

    Complex(){
        System.out.println("Defualt construtor is called");
    }
    Complex(int id,String name){
        this.id = id;
        this.name = name;
    }
    Complex(Complex c){
        id = c.id;
        name = c.name;
    }
    public String toString(){
        return "("+ id + "-" + name + ")";
    }          
}
