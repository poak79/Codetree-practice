import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s;

        for(int i=1;i<=n;i++) {
            s+=i;
            if(s<=n) {
                System.out.println(i);
                break;
            }
        }
    }
}