import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[10];
        int th=0;
        int fif=0;

        for(int i=0;i<10;i++) {
            num[i] = sc.nextInt();
            if(num[i]%3==0) {
                th+=1;
            }
            if(num[i]%5==0) {
                fif+=1;
            }
        }

        System.out.printf("%d %d", th, fif);
    }
}