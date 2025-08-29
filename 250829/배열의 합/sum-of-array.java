import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] num = new int[4][4];
        int total=0;

        for(int i=0;i<4;i++) {
            for(int j=0;j<4;j++) {
                num[i][j] = sc.nextInt();
                total += num[i][j];
            }
            System.out.println(total);
            total=0;
        }

    }
}