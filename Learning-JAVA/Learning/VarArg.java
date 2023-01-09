package Learning;


public class VarArg {

    static void print(int a[]){
        for (int i=0; i<a.length; i++){
            System.out.println("Element: "+a[i]);
        }
    }

    static void print(int a,int b){
        System.out.println("a "+a);
        System.out.println("b "+b);
    }
    public static void main(String[] args) {
        int n1[] = {4};
        VarArg.print(n1);
        VarArg.print(3,4);
    }
    
}
