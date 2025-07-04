import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();

        int total = a+b+c;
        int average = total/3;
        int totals = total - average;

        System.out.printf("%d\n%d\n%d", total, average, totals);
    }
}