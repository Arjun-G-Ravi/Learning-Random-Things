package Learning;
    class Circle{
        int r;
        Circle(int radius){
            
            System.out.println("Constructor");
            r =radius;
        }
        int get_radius(){
            return r;
        }
    }
class CircleQn {
    public static void main(String[] args) {
        Circle ball1 = new Circle(50);
        Circle ball2 = new Circle(30);
        System.out.println(ball1.get_radius());
        System.out.println(ball2.get_radius());
    }
}
