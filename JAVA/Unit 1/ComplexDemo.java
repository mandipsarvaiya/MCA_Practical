public class ComplexDemo {
    public static void main(String []args){
        Complex c1 = new Complex(10, 15);
        Complex c2 = new Complex(11, 13);
        Complex c3 =new Complex();
        Complex c = c3.add(c1, c2);
        System.out.println("addition of two object is = "+c);
    }
}

class Complex{
    private double re, im;
    public Complex(){}
    public Complex(double re, double im){
        this.re = re;
        this.im = im;
    }
    Complex(Complex c){
        System.out.println("Copy Construcctor called");
        re = c.re;
        im = c.im;
    }
    public String toString(){
        return "("+re+" + "+im+ "i)";
    }
    Complex add(Complex c1, Complex c2){
        Complex c3 = new Complex();
        c3.re = c1.re + c2.re;
        c3.im = c1.im + c2.im;
        return c3;
    }
}