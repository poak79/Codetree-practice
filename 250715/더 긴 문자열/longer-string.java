import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        String b = sc.next();

        if(a.length() == b.length()) {
            System.out.print("same");
        }
        else if(a.length()>b.length()) {
            System.out.printf("%s %d", a, a.length());
        }
        else if(a.length()<b.length()) {
            System.out.printf("%s %d", b, b.length());
        }
    }
}