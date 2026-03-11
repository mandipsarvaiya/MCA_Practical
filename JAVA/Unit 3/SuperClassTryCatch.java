public class SuperClassTryCatch {
    public static void main(String[] args) {
        
    }
}

class SuperClass{
    void show(){
        try {
            SuperClass obj = new SuperClass();
            obj.display();
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Handled in sub class" + e);
        }
    }
}

class SubClass extends SuperClass{
    void display(){
        try {
            System.out.println("inside subclass display");
            int arr[]={1,2,3,4};
            System.out.println(arr[5]);
        } catch (Exception e) {
            System.out.println("handle in subclass");
        }
    }
}

