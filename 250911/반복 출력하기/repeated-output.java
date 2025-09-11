import java.util.Scanner;

public class Main {

    public static void Lines(int s) {
        for(int i=0;i<s;i++) {
            System.out.println("12345^&*()_");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Lines(n);
    }
}