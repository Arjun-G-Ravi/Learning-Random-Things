import java.util.Scanner;

abstract class Shape{
    int n;
    double a;
    void numSides(){
        System.out.println(n);
    }
    abstract void get_area(int r);
}

class Circle extends Shape{
    int r;
    Circle(){
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
    }
    void get_area(){
        System.out.println(3.14*r*r);
    }
}


public class _6_AbstrClass {
    public static void main(String[] args) {
        Circle o = new Circle();
        o.get_area();

    }
}
