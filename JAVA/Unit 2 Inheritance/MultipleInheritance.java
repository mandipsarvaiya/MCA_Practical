import java.util.*;

public class MultipleInheritance {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);

        C obj1 = new C();
        obj1.brand = sc.next();
        obj1.model = sc.next();
        obj1.year = sc.nextInt();
        obj1.batteryCapacity = sc.nextInt();
        obj1.displayElectricCar();
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
    
    void displayModel(){
        displayVahical();
        System.out.println("model is "+ model);
    }
}

class C extends B{
    int batteryCapacity;

    void displayElectricCar(){
        displayModel();
        System.out.println("battry capicity is "+ batteryCapacity);
    }
}