public class Main {
    public static void Print10Stars() {
        for(int i=0;i<10;i++) 
            System.out.print("*");
        System.out.println();
    }

    public static void main(String[] args) {
        for(int i=0;i<5;i++)
            Print10Stars();
    }
}