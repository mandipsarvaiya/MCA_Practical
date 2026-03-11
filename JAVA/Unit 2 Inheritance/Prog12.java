public class Prog12 {
    public static void main(String[] args) {
        Car c = new Car("tata", "xev");
    }
}
class Vehicle{
    String brand;
    Vehicle(String brand){
        this.brand = brand;
        System.out.println("Vehical Brand :"+ brand);
    }
}

class Car extends Vehicle{
    String model;
    Car(String brand, String model){
        super(brand);
        this.model = model;
        System.out.println("brand : " + brand);
        System.out.println("model : " + model);
    }
}
