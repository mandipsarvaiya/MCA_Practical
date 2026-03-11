public class BankAbstract {
    public static void main(String[] args) {
        SavingAccount s1 = new SavingAccount(1234, "Renil", 10000);
        s1.deposit(5000);
        s1.withdraw(2000);
        s1.calculateInterest();
    }
}


abstract class Bank{
    int accNumber;
    String accHolder;
    int balance;
    final String bankName= "SBI";

    Bank(int accNumber, String accHolder, int balance){
        this.accNumber = accNumber;
        this.accHolder = accHolder;
        this.balance = balance;
    }

    void deposit(int x){
        balance = balance + x;
        System.out.println("Amount deposit");
    }

    void withdraw(int x){
        if(x>balance){
            System.out.println("Unsufficient Balance");
        } else{
            balance = balance - x;
            System.out.println("balance = " + balance);
        }
    }
    abstract void calculateInterest();
}

class SavingAccount extends Bank{
    final float interastRate = 6.0f;

    SavingAccount(int accNumber, String accHolder, int balance){
        super(accNumber, accHolder, balance);
    }
    public void calculateInterest(){
        System.out.println("Interest amount is "+(balance*interastRate/100));
    }
}

class CurrentAccount extends Bank{
    final float interastRate = 8.0f;

    CurrentAccount(int accNumber, String accHolder, int balance){
        super(accNumber, accHolder, balance);
    }
    public void calculateInterest(){
        System.out.println("Interest amount is "+(balance*interastRate/100));
    }
}


