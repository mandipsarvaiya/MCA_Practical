package Extra;
//inheritence

import java.util.*;

public class Prog11 {
    public static void main(String []args){
        Son s = new Son();
        s.showDetails();
    }
}


class Father {

    String surname = "Garala";
    double land = 5.5;
}

class Son extends Father {

    String name = "Renil";
    String education = "MCA";

    void showDetails() {
        System.out.println("Name: " + name + " " + surname);
        System.out.println("Education: " + education);
        System.out.println("Inherited Land: " + land + " acres");
    }
}