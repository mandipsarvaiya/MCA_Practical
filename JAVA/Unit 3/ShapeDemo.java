public class ShapeDemo {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        c1.radius = 5;
        c1.getArea();
        Rectangle r1 = new Rectangle();
        r1.length = 10;
        r1.breadth = 5;
        r1.getArea();
        triangle t1 = new triangle();
        t1.base = 10;
        t1.height = 5;
        t1.getArea();
    }    
}

interface Shape{
    void getArea();
}
class Circle implements Shape {
    int radius;
    @Override
    public void getArea() {
        System.out.println("Area of circle is "+(3.14*radius*radius));
    } 
}
class Rectangle implements Shape {
    int length;
    int breadth;
    @Override
    public void getArea() {
        System.out.println("Area of rectangle is "+(length*breadth));
    }
}
class triangle implements Shape {
    int base;
    int height;
    @Override
    public void getArea() {
        System.out.println("Area of triangle is "+(0.5*base*height));
    }
}
