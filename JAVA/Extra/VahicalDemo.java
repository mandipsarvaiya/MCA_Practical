import Vahical;

package Extra;
public class VahicalDemo {
    public static void main(String[] args) {
        Bike b1 = new Bike("Pulsar", 1234, "Standard", 15);
        b1.startEngine();
        b1.calculateMileage();
    }
}

abstract class Vahical{
    int number;
    String model;
    final String company="MotoCrop";

    Vahical(){
        System.out.println("Default constructor of Vahical class");
    }

    Vahical(String model, int number){
        this.model = model;
        this.number = number;
    }

    final void startEngine(){
        System.out.println("Engine start of bike model number is : "+number);
    }

    abstract void calculateMileage();
}

class TwoWheeler extends Vahical{
    String type;
    int mileage;

    TwoWheeler(String model, int number, String type){
        super(model, number);
        this.type = type;
    }

    void calculateMileage(){
        if(type == "Sports"){
            mileage = 35;
            System.out.println("Mileage of sports bike is Low");
        } else if(type == "Standard"){
            mileage = 50;
            System.out.println("Mileage of cruiser bike is higher");
        } else{
            System.out.println("Invalid bike type");
        }
    }
}
class Bike extends TwoWheeler{
    int fuelCapacity;
    Bike(String model, int number , String type, int fuelCapacity){
        super(model, number, type);
        this.fuelCapacity = fuelCapacity;
    }

    void calculateMileage(){
        if(type == "Sports"){
            System.out.println("Mileage of sports bike is "+ fuelCapacity*35);
        } else if(type == "Standard"){
            System.out.println("Mileage of cruiser bike is "+fuelCapacity*50);
        } else{
            System.out.println("Invalid bike type");
        }
    }
}