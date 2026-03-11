import java.util.*;

public class StudentDemo {

    public static void main(String []args){
        int rollno,m1,m2,m3,total, length;
        float avg;
        String name;

        Scanner sc = new Scanner(System.in);


        System.out.print("Enter length of employee = ");
        length = sc.nextInt();

        Student s[] = new Student[length];

        for(int i=0; i<length; i++){
            System.out.print("Enter RollNo of s["+(i+1)+"] = ");
            rollno = sc.nextInt();

            System.out.print("Enter name of s["+(i+1)+"] = ");
            Scanner sc1 = new Scanner(System.in);
            name = sc1.nextLine();

            System.out.print("Enter m1 of s["+(i+1)+"] = ");
            m1 = sc.nextInt();

            System.out.print("Enter m2 of s["+(i+1)+"] = ");
            m2 = sc.nextInt();

            System.out.print("Enter m3 of s["+(i+1)+"] = ");
            m3 = sc1.nextInt();


            s[i] = new Student(rollno, name, m1, m2, m3 );
            s[i].CalculateMarksheet();
        }

        System.out.println("Student Information is = ");
        System.out.println("rollno\tname\tm1\tm2\tm3\ttotal\tavg");

        for(int i=0; i<length; i++){
            s[i].DisplayMarksheet();
        }

    }
}

class Student{
    int rollno,m1,m2,m3,total;
    float avg;
    String name;

    Student(){
        rollno=0;
        m1=0;
        m2=0;
        m3=0;
        name="";
    }

    Student(int rollno,String name, int m1, int m2, int m3){
        this.rollno = rollno;
        this.name = name;
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }

    void CalculateMarksheet(){
        total = m1+m2+m3;
        avg = (m1+m2+m3)/3;
    }
    
    void DisplayMarksheet(){
        System.out.println(rollno+"\t"+name+"\t"+m1+"\t"+m2+"\t"+m3+"\t"+total+"\t"+avg);
    }
}

