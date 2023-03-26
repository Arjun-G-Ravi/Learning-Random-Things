import java.io.*;

import javax.imageio.IIOException;

public class _Ex {
    public static void main(String[] args) throws IIOException {
        
        char c;
        String s;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a line of text");
        c=(char)br.read();
        s=br.readLine();
        System.out.println("Line is "+s);
        
      
    }
}
