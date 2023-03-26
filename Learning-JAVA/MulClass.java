package Learning;

class C1{
    static int np = 10;
    int m = 5;
}
class C2{
    static int n = 34;
    static int k = 45;

    static int allSum(){
        C1 obj = new C1();
        return(n+k+C1.np+obj.m);
    }
}
public class MulClass {
    public static void main(String[] args) {
        C1 c1 = new C1();
        C2 c2 = new C2();
        // System.out.println(c1.n);
        // System.out.println(c1.m);
        // System.out.println(c2.n);
        // System.out.println(c2.k);
        System.out.println(C2.allSum());

    }
}
