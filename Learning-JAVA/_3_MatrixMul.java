import java.util.Scanner;

public class _3_MatrixMul {
    public static void main(String[] args) {
        int m1,n1,m2,n2;
        int temp;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter order of mat1:");
        m1 = sc.nextInt();
        n1 = sc.nextInt();
        System.out.println("Enter order of mat2:");
        m2 = sc.nextInt();
        n2 = sc.nextInt();
        if (n1!=m2){
            System.out.println("Mul not possible");
        }
        else{
            int a[][] = new int[m1][n1];
            int b[][] = new int[m2][n2];
            int c[][] = new int[m1][n2];
            System.out.println("Enter elements of mat1:");
            for(int i=0; i<m1; i++){
                for(int j=0; j<n1; j++){
                    temp = sc.nextInt();
                    a[i][j]=temp;
                }
            }
            System.out.println("Enter elements of mat2:");
            for(int i=0; i<m2; i++){
                for(int j=0; j<n2; j++){
                    temp = sc.nextInt();
                    b[i][j]=temp;
                }
            }

            for(int i=0; i<m1; i++){
                for(int k=0; k<n2; k++){
                    c[i][k]=0;
                    for(int j=0; j<n1; j++){    
                        c[i][k]+=a[i][j]*b[j][k];
                    }
                }
            }
            System.out.println("Product is :");
            for(int i=0; i<m1; i++){
                for(int j=0; j<n2; j++){
                    System.out.println(c[i][j]);
                }
            }

    }
    }
}
