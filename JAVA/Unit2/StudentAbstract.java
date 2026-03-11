import Extra.Student;

public class StudentAbstract {
    public static void main(String[] args) {
        ScienceStudent sci = new ScienceStudent(10, "renil", 1000);
        sci.displayInfo();
        sci.calculateGarde();
    }
}

abstract class Student{
    int studentId;
    String name;
    final String schoolName = "DU";

    Student(int studentId, String name){
        this.studentId = studentId;
        this.name = name;
    }

    final void displayInfo(){
        System.out.println("student id is = "+ studentId);
        System.out.println("name is = "+ name);
        System.out.println("school name is = "+ schoolName);
    }
    
    abstract void calculateGarde();
}

class ScienceStudent extends Student{
    int marks;
    ScienceStudent(int studentId, String name, int marks){
        super(studentId, name);
        this.marks = marks;
    }

    public void calculateGarde(){
        if(marks > 80){
            System.out.println("Grade is = A");
        }
    }
}

class ArtsStudent extends Student{
    int marks;
    ArtsStudent(int studentId, String name, int marks){
        super(studentId, name);
        this.marks = marks;
    }
    public void calculateGarde(){
        if(marks > 70){
            System.out.println("Grade is = A");
        }
    }
}