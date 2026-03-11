package Extra;
import java.util.Scanner;

class Vahical{
    String model;
    String company;

    Vahical(String model, String company){
        this.model = model;
        this.company = company;
    }

    void display(){
        System.out.println("Model is = "+ model);
        System.out.println("Company is = "+ company);
    }
}

public class Prog8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Length");
        int length = sc.nextInt();
        Vahical v1[] = new Vahical[length];

        //length = 3
        System.out.println("--------------Taking Value From User------------");
        for(int i=0; i<length; i++){
            String model, company;
            System.out.print("Enter model = ");
            model = sc.next();
            System.out.print("Enter company = ");
            company = sc.next();

            v1[i] = new Vahical(model, company);
            
        }

        System.out.println("--------------Display Values------------");
        for(int i = 0; i<length; i++){
            v1[i].display();
        }

    }
}
