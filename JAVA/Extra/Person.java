package Extra;
public class Person {
    String n;

    public Person(String n){
        this.n = n;
    }

    public String toString(){
        return "Person[name:\""+n+"\"]";
    }

    public static void main(String[] args) {
        Person p = new Person("John ");
        System.out.println(p.toString());
        System.out.println(p);
        System.out.println(p.hashCode());
    }
}