import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();

        int total = a+b;
        double average = total / 2.0;
        System.out.printf("%d %.1f", total, average);
    }
}