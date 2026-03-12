import java.util.Scanner;

public class Mid5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LibraryBook i1 = new LibraryBook(1,"abc",10);

        int n = sc.nextInt();
        try {
            if(i1.availableBook < n){
                throw new BookNotAvailable("available bo"+ i1git .availableBook + " not issued");
            } else{
                i1.availableBook = i1.availableBook-n;
                System.out.println("Book issued");
                System.out.println(i1.availableBook);
            }
        } catch (BookNotAvailable e) {
            System.out.println(e.getMessage());
        } finally{
            System.err.println("process complete");
        }
    }
}
interface Library {
    
    void issueBook(int count);
    void returnBook(int count);
}
class BookNotAvailable extends Exception {
    public BookNotAvailable(String message)
    {
        super(message);
    }
}
class ExceedLimit extends Exception {
    public ExceedLimit(String message)
    {
        super(message);
    }
}
abstract class Book{
    int bookId;
    String bookName;
    int availableBook;

    Book(int bookId, String bookName, int availableBook){
        this.bookId = bookId;
        this.bookName = bookName;
        this.availableBook = availableBook;
    }

    abstract void display();
}
class LibraryBook extends Book{

    LibraryBook(int bookId,String bookName,int availableBook){
        super(bookId,bookName,availableBook);
    }

    @Override
    void display() {
        System.out.println("Book id"+bookId);
        System.out.println("Book name"+bookName);
        System.out.println("Avaialble Book"+availableBook);
    }
}