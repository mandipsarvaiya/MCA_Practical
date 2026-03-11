public class SuperInheritrance {
    public static void main(String[] args) {
        U2 u1 = new U2(2,3,4);
        System.out.println("u2.s2 = "+ u1.s2);
        System.out.println("u2.t2 = "+ u1.t2);
        System.out.println("u2.u2 = "+ u1.u2);   
    }
}

class S2{
    int s2;
    S2(int s2){
        this.s2 = s2;
        System.out.println("S1 Constructor"+ s2);
    }
}

class T2 extends S2{
    int t2;
    T2(int s2, int t2){
        super(s2);
        this.t2 = t2;
        System.out.println("T2 Constructor"+ t2);
    }
}

class U2 extends T2{
    int u2;
    U2(int s2,int t2, int u2){
        super(s2, t2);
        this.u2 = u2;
        System.out.println("U1 Constructor"+ u2);
    }
}
