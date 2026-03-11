public class Mid1 {
    public static void main(String[] args) {
        Student s1 = new Student(10, "renil");
        s1.display();

        Student s2 = new Student(s1);
        s2.display();
    }
}

class Student{
    int id;
    String name;

    Student(int id, String name){
        this.id = id;
        this.name = name;
    }

    Student(Student s){
        this.id = s.id;
        this.name = s.name;
    }

    void display(){
        System.out.println("id ="+ id + ", name = "+name);
    }
}
