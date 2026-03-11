public class BookString {

    String title;
    BookString(String title){
        this.title = title;
    }
    public static void main(String[] args) {
        BookString b1 = new BookString("Java");
        BookString b2 = new BookString("Javac");

        System.out.println(b1.equals(b2));
        System.out.println(b1.hashCode());
        System.out.println(b2.hashCode());
    }
}
