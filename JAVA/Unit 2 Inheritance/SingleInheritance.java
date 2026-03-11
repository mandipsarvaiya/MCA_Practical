import java.util.*;;

public class SingleInheritance {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String brand = sc.next();
        String model = sc.next();
        int year = sc.nextInt();

        B obj1 = new B(brand,model, year);
        obj1.displayModel();
    }
}

class A{
    String brand;
    int year;
    void displayVahical(){
        System.out.println("Brand name is "+ brand);
        System.out.println("Vehicle year is "+ year);
    }
}

class B extends A{
    String model;
    
    B(String brand, String model, int year){
        this.brand = brand;
        this.model = model;
        this.year = year;
    }
    void displayModel(){
        displayVahical();
        System.out.println("model is "+ model);
    }
}