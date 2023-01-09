import java.util.Scanner;

public class _2_FreqOfCharInAString {
    static int freq(String word, char c){
        int f=0;
        int len=word.length();
        for(int i=0; i<len; i++){
            if(word.charAt(i)==c){
                f++;
            }
        }
        return f;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        char c =sc.next().charAt(0);
        System.out.println(freq(word,c));
    }
}
