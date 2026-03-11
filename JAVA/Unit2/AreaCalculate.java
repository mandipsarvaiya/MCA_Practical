import java.util.Scanner;

public class AreaCalculate {
    public static void main(String[] args){
        Volume v1 = new Volume();
        v1.input_M();
        v1.display();
    }    
}
class Area{
    protected int length;
    protected int width;

    Scanner sc = new Scanner(System.in);
    public void input_L_W(){
        System.out.print("Enter length = ");
        length = sc.nextInt();
        System.out.print("Enter width = ");
        width = sc.nextInt();
    }
}
class Volume extends Area{
    private int height;

    Scanner sc = new Scanner(System.in);
    public void input_M(){
        input_L_W();
        System.out.print("Enter height = ");
        height = sc.nextInt();
    }

    //dsiplay methods
    void display(){
        System.out.println("Length is "+length);
        System.out.println("Width is "+width);
        System.out.println("Height is "+height);
        System.out.println("Area is "+ length*width);
        System.out.println("Volume is "+ length*width*height);
    }
}