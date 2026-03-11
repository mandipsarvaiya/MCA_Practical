package Extra;
public class Prog3 {
    public static void main(String[] args) {
        int sum=0;
        int i=3;
        while (i<=10) {
            if(i==5){
                i++;
                continue;
            }
            sum= sum+i;
            i++;
        }
        System.out.println(sum);
    }
}
