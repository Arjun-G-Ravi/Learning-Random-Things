import java.util.Scanner;

public class _1_palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        int len = word.length();
        int flag = 1;
        for (int i=0; i<len; i++){
            if (word.charAt(i) != word.charAt(len-1-i)){
                flag=0;
            }
        }
        if (flag==0){
            System.out.println("Not palindrome");
        }
        else{
            System.out.println("palindrome");
        }
    }
    
}
