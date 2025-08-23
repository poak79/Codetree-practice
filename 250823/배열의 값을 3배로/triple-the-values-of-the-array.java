import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] num = new int[3][3];
        int[][] new_num = new int[3][3];

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                num[i][j] = sc.nextInt();
            }
        }

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                new_num[i][j] = 3*num[i][j];
            }
        }

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                System.out.print(new_num[i][j] + " ");
            }
            System.out.println();
        }

    }
}