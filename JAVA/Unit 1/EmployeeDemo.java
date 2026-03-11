import java.util.*;;

public class EmployeeDemo {
    public static void main(String args[]){
        int length;
        double basic;
        String empid, ename;
        Scanner sc = new Scanner(System.in);
        Scanner sc1 = new Scanner(System.in);

        System.out.print("Enter length of employee = ");
        length = sc.nextInt();

        Employee e[] = new Employee[length];

        for(int i = 0; i<length; i++){
            System.out.print("Enter id of employee["+(i+1)+"] = ");
            empid = sc.next();

            System.out.print("Enter name of employee["+(i+1)+"] = ");
            ename = sc1.nextLine();

            System.out.print("Enter basic of employee["+(i+1)+"] = ");
            basic = sc.nextDouble();

            e[i] = new Employee(empid, ename, basic);
            e[i].CalculateSalary();
        }
        System.out.println("Employee Information is = ");
        System.out.println("empid\tename\tbasic\thra\tda\tpf\tgrosspay");

        for(int i = 0; i<length; i++){
            e[i].DisplayDetails();
        }
    }
}

class Employee{
    double basic, hra,da,pf, grosspay;
    String ename,empid;

    Employee(){
        empid = "";
        ename = "";
        basic = 10000;
    }

    Employee(String ename, String empid, double basic){
        this.ename = ename;
        this.empid = empid;
        this.basic = basic;
    }

    void CalculateSalary(){
        hra = basic * 0.10;
        da = basic * 0.08;
        pf = basic * 0.12;
        grosspay = (basic + hra + da)- pf;
    }

    void DisplayDetails(){
        System.out.print("\n"+empid+ "\t\t"+ ename + "\t" + basic + "\t" + hra + "\t" + da + "\t" + pf + "\t" + grosspay + "\t");
    }
}
