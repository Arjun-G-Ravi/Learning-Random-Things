import javax.swing.*;
import java.awt.event.*;

public class swing {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        JButton b = new JButton("Click me");
        f.setLayout(null);
        f.setSize(500,500);
        f.setVisible(true);

        b.setBounds(100,100,100,100);
        f.add(b);

    }
}
