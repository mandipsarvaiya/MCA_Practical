// create a student class with id name & marks & intitlze with constructtor and create display method 

import java.util.*;
class Mid
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter length");
        int n=sc.nextInt();

        int id, marks;
        String name;

        Student s1[] = new Student[n];
        Student s21 = new Student();

        for(int i=0; i<n; i++){
            System.out.print("enter id");
            id=sc.nextInt();
            System.out.print("enter name");
            name=sc.next();
            System.out.print("enter marks");
            marks=sc.nextInt();

            s1[i] = new Student(id, name, marks);
        }
       

        for(int i=0; i<n; i++){
            s1[i].display();
        }
    }
}
class Student
{
    int id,marks;
    String name;

    Student(){
        System.out.println("defoult construtor called please pass id,name,marks while creating object");
    }

    Student(int id, String name, int marks)
    {
        this.id=id;
        this.name=name;
        this.marks=marks;
    }

    void display()
    {
        System.out.println(" id = "+id +" marks = "+ marks +" name = "+ name);
    }

}