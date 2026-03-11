public class Mid3{
    public static void main(String[] args) {
        Volume v1= new Volume(10,20, 30);
      
        v1.getvolume();   
    }
}
class Area{
    protected int length;
    protected int width;

    Area(int length,int width)
    {
        this.length=length;
        this.width=width;
    }

    void getarea(){
        System.out.println("length"+length);
        System.out.println("width"+width);
    }
}
class Volume extends Area{
    private int height;

    Volume(int height,int length,int width){
        super(length, width);
        this.height=height;
    }

    void getvolume()
    {
        System.out.println("height"+height);
        System.out.println("length"+length);
        System.out.println("width"+width);
        System.out.println("Area is "+ length*width);
        System.out.println("Volume is "+ length*width*height);
    }
}