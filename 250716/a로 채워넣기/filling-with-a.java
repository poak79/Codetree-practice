import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] a = sc.next().toCharArray();

        a[1] = 'a';
        a[a.length-2] = 'a';

        System.out.println(a);
        
    }
}