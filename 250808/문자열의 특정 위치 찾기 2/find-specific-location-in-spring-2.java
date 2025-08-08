import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char n = sc.next().charAt(0);

        int cnt=0;

        String[] sen = {"apple", "banana", "grape", "blueberry", "orange"};

        for(int i=0;i<5;i++) {
            for(int j=2;j<4;j++) {
                if(sen[i].charAt(j)==n) {
                    System.out.println(sen[i]);
                    cnt++;
                    break;
                }
            }
        }
        System.out.println(cnt);
    }
}
