//method overriding in java
//when a subclass provides a specific implementation of a method that is already defined in its superclass,
//then the method in the subclass is said to override the method in the superclass.

import Extra.Vahical;

public class Prog13{
    public static void main(String[] args){
        Vahical v = new Vahical();
        v = new Car();
        v.start();
        v.display();
    }
}                      

class Vahical{
    public void start(){
        System.out.println("Vahical is starting......");
    }
}

class Car extends Vahical{
    public void start(){
        super.start();
        System.out.println("Car is starting......");
    }
    public void display(){
        System.out.println("This is a car");
    }
}
