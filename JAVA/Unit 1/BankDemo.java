import java.util.*;

public class BankDemo {
    public static void main(){
        Scanner sc = new Scanner(System.in);
    }
}

class Bank {
    int accno, balance;
    String accHolderName;

    Bank(){
        System.out.println("default cinstructor is called, pass value while creating object");
    }

    Bank(int accno, String accHolderName, int balance){
        this.accno = accno;
        this.balance = balance;
        this.accHolderName = accHolderName;
    }

    void deposit(int amount){
        balance = balance + amount;
        System.out.println("deposit done, new balance is "+ balance);
    }

    void withdrawal(int amount){
        balance = balance - amount;
        System.out.println("Withdrawal done, new balance is "+ balance);
    }
}
