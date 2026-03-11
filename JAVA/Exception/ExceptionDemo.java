import java.util.Scanner;

interface Reservation {
    void bookTicket(int seat);
    void cancelTicket(int seat);
}

class SeatNotAvailable extends Exception {
    public SeatNotAvailable(String message) {
        super(message);
    }
}

class InsufficientSeat extends Exception {
    public InsufficientSeat(String message) {
        super(message);
    }
}

abstract class Flight {
    int flightno;
    String destination;
    int availableseat;

    Flight(int flightno, String destination, int availableseat) {
        this.flightno = flightno;
        this.destination = destination;
        this.availableseat = availableseat;
    }

    abstract public void display();

}

class Domestic extends Flight{
    Domestic(int flightno, String destination, int availableseat){
        super(flightno, destination, availableseat);
    }

    public void display() {
        System.out.println("Flight Number: "+ flightno);
        System.out.println("Destination: "+ destination);
        System.out.println("Available Seats: "+ availableseat);
    }   
}

public class ExceptionDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Flight f1 = new Domestic(1, "Mumbai", 10);
        int seats;
        int cancelSeats;
        f1.display();

        while(true){
            System.out.print("Enter your choice\n1.Book Ticket\n2.Cancel Ticket\n3.Display\n4.Exit\n");
            int choice = sc.nextInt();
            switch(choice){
                case 1:
                    System.out.print("Enter the number of seats to book: ");
                    seats = sc.nextInt();
                    
                    try {
                        if(f1.availableseat==0){
                            throw new InsufficientSeat("No Seats Available");
                        }
                        if(seats>f1.availableseat){
                            throw new InsufficientSeat("Insufficient Seats");
                        }
                        f1.availableseat-=seats;
                        System.out.println("Seats Booked Successfully");  
                    } catch (InsufficientSeat e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                case 2:
                    System.out.print("Enter the number of seats to you want to cancel: ");
                    cancelSeats = sc.nextInt();
                    try {
                        if(f1.availableseat+cancelSeats>50){
                            throw new SeatNotAvailable("Exceeding the total capacity");
                        }
                        f1.availableseat += cancelSeats;
                        System.out.println("Seats Cancelled Successfully");
                    } catch (SeatNotAvailable e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                case 3:
                    f1.display();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}