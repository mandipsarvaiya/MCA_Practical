public class PassingObjectArguments {
    public static void main(String[] args){
        Student s1 = Student.getStudent();
        s1.display();
    } 
}

class Student{
    int id;
    String name;
    Student (int i, String n){
        id = i;
        name = n;
    }
    static Student getStudent(){
        Student s = new Student(102, "renil");
        return s;
    }
    void display(){
        System.out.println(id+ " " + name);
    }
}

