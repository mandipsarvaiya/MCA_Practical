package Extra;
abstract class LibraryItemDemo {
    String itemId, title;
    final String libnm="LJ";

    LibraryItemDemo(){

    }
    LibraryItemDemo(String itemId, String title){
        this.title = title;
        this.itemId = itemId;
    }

    final public void displayItem(){
        System.out.println("Item id is "+itemId+"\ntitle is "+title+"\nlib name is "+libnm);
    }

    abstract public void CalculateLateFee(int latedays, int latefees);
}

class Magazine extends LibraryItemDemo{
    Magazine(){
        System.out.println("default constructor called");
    }
    Magazine(String itemId, String title){
        super(itemId,title);
    }
    public void CalculateLateFee(int latedays, int latefees){
        int totalfine;
        totalfine = latedays*latefees;
        System.out.println("Magazine Interface "+totalfine);
    }
}

class Book extends LibraryItemDemo{
    Book(){
        System.out.println("default constructor called");
    }
    Book(String itemId, String title){
        super(itemId,title);
    }
    public void CalculateLateFee(int latedays, int latefees){
        int totalfine;
        totalfine = latedays*latefees;
        System.out.println("Book Interface "+totalfine);
    }
}

public class LibraryItem{
    public static void main(String[] args) {
        Book l1 = new Book("102","tina man");
        l1.displayItem();
        l1.CalculateLateFee(4,200);

        Magazine l2 = new Magazine("101","renil");
        l2.displayItem();
        l2.CalculateLateFee(4,200);
    }
}