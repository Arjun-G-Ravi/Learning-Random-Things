public class _4_MethOverloading {
    double area(int r){
        return 3.14*r*r;
    }
    double area(int l, int b){
        return l*b;
    }
    public static void main(String[] args) {
        _4_MethOverloading obj = new _4_MethOverloading();
        System.out.println(obj.area(10));
        System.out.println(obj.area(10,10));
    }
}
