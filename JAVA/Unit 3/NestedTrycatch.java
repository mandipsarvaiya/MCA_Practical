public class NestedTrycatch{
    public static void main(String[] args){
        try{
            int arr[]={10,20,30};
            try{
                System.out.println(arr[5]);
            }catch(NumberFormatException e){
                System.out.println("inner catch");
            }
            int result= 10/0;
        } catch(ArithmeticException e){
            System.out.println("Outer catch: Division by zero");
        } catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Outer catch: ArrayIndexOutOfBoundsException");
        } finally{
            System.out.println("finally end");
        }
    }
}