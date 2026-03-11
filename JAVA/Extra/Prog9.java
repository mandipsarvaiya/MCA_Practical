import Student;

package Extra;
public class Prog9 {
    public static void main(String[] args) {
        Student s1 = new Student("renil", 20);
        Student s2 = new Student("ram", 22);

        s1.compareAge(s1, s2);
    }
}

class Student{
    String name;
    int age;

    Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    void display(){
        System.out.println("name is "+name+ " and age is "+age);
    }
    void compareAge(Student s1, Student s2){
        if(s1.age > s2.age){
            System.out.println(s1.name+ " is older then "+ s2.name);
        } else{
            System.out.println(s2.name+ " is older then "+ s1.name);
        }
    }
}
