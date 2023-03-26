import java.util.*;

public class _2_AreaOfCircle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius: ");
        double r = sc.nextDouble();
        System.out.println("Area of circle is " + 3.14*r*r);
        sc.close(); // optional
    }
}
