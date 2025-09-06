import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                int val;
                if(j%2==0) {
                    val = i+1;
                }
                else {
                    val = n-i;
                }
                System.out.print(val);
            }
            System.out.println();
        }
    }
}