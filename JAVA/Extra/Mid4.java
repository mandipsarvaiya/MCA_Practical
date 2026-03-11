public class Mid4{
    public static void main(String[] args) {
        Car c1 = new Car("punch","tata",2002);

        ElectricCar e1 = new ElectricCar(20,"thar","mehndra",2000);
        e1.displayelectriccar();
        
    }
}
class Vehical{
    String brand;
    int year;

    Vehical(String brand,int year){
        this.brand=brand;
        this.year=year;
    }

    void displayVehicle()
    {
        System.out.println("brand"+brand);
        System.out.println("year"+year);
    }
}
class Car extends Vehical{ 
    String model;

    Car(String model,String brand,int year){
        super(brand,year);
        this.model=model;
    }
    void displayCar()
    {
        System.out.println("model"+model);
        System.out.println("brand"+brand);
        System.out.println("year"+year);
    }
}
class ElectricCar extends Car{
    int batteryCap;

    ElectricCar(int batteryCap,String model,String brand,int year){
        super(model, brand,year);
        this.batteryCap=batteryCap;
    }

    void displayelectriccar(){
        System.out.println("battrey capcity"+batteryCap);
        System.out.println("model"+model);
        System.out.println("brand"+brand);
        System.out.println("year"+year);
    }
}