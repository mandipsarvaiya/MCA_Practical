public class Garbage {
    public void finalize(){
        System.out.println("Garbage Collected");
    }
    public static void main(String []args){
        Garbage g1 = new Garbage();
        g1=null;
        System.gc();
    }
}