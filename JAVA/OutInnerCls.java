package Learning;
class Outer{
    int Data = 10;
    void print(){
        System.out.println("Outer printed");
    }
    class Inner{
        int Data = 20;
        void print(){
            System.out.println("Inner printed");
        }
    }
}
public class OutInnerCls {
    public static void main(String[] args) {
        Outer o = new Outer();
        Outer.Inner i = o.new Inner();  // WOW !!!!!
        System.out.println(i.Data);
        i.print();
    }
    
}
