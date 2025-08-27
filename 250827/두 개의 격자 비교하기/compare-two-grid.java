import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[][] numf = new int[n][m];
        int[][] nums = new int[n][m];
        int[][] new_num = new int[n][m];

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                numf[i][j] = sc.nextInt();
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                nums[i][j] = sc.nextInt();
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                new_num[i][j] = (numf[i][j] != nums[i][j]) ? 1 : 0;
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                System.out.print(new_num[i][j] + " ");
            }
            System.out.println();
        }


    }
}