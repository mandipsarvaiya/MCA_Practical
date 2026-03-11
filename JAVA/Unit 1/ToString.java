public class ToString {
    public static void main(String[] args) {
        Student s = new Student(101, "Renil");
        System.out.println(s);
    }
}

class Student {
    int id;
    String name;

    Student(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public String toString() {
        return "ID: " + id + ", Name: " + name;
    }
}
