import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] new_num =  new int[3][3];
        int[][] numf = new int[3][3];
        int[][] nums = new int[3][3];

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                numf[i][j] = sc.nextInt();
            }
        }

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                nums[i][j] = sc.nextInt();
            }
        }

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                new_num[i][j] = numf[i][j] * nums[i][j];
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