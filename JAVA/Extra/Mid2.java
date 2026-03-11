public class Mid2 {
    public static void main(String[] args) {
        Student s1 = new Student(10, "renil", "lj");
        s1.display();
        s1.display("man");
        s1.getSchooName();

    }
}

class School{
    String school_name;

    School(String school_name){
        this.school_name=school_name;
    }

    void getSchooName(){
        System.out.println("school = "+school_name);
    }
}
class Student extends School{
    int id;
    String name;

    Student(int id, String name, String school_name){
        super(school_name);
        this.id = id;
        this.name = name;
    }

    @Override
    void getSchooName(){
        System.out.println("i donot know");
    }

    void display(){
        System.out.println("id ="+ id + ", name = "+name);
    }

    void display(String name){
        System.out.println("new name is " + name);
    }
}