public class hellorun extends Thread {
    public void run(){
        System.out.println("Running...");
    }

    public static void main(String[] args) {
        while(true){
            System.out.println("OINK");
            Thread t1 = new Thread(new hellorun());
            t1.start();
        }
    }
}
