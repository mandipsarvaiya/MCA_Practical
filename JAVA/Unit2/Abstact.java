public class Abstact {
    public static void main(String[] args) {
        Developer m = new Developer(1,"renil", 100);
        m.displaySal();
        m.calBonus();
    }
}

abstract class Emp{
    String empName;
    int salary, empId;

    final String companyName = "ljmca";

    Emp(){

    }
    Emp(int empId, String empName, int salary){
        this.empId = empId;
        this.empName = empName;
        this.salary = salary;
    }
    final void displaySal(){
        System.out.println("empid is = "+ empId);
        System.out.println("Emp name is = "+ empName);
        System.out.println("emp cname is:"+ companyName);
        System.out.println("emp salary is "+ salary);
    }
    abstract public void calBonus();
}

class Manager extends Emp{
    double bonus;
    Manager(int empId, String name, int salary){
        super(empId, name, salary);
    }
    public void calBonus(){
        bonus = salary * 0.05;
        System.out.println("emp bonus is : "+ bonus);
    }
}

class Developer extends Manager{
    double bonus;
    Developer(int empId, String name, int salary){
        super(empId, name, salary);
    }
    public void calBonus(){
        bonus = salary * 0.05;
        System.out.println("emp bonus is : "+ bonus);
    }
}