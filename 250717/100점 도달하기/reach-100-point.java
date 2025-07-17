import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        for(int i=a;i<=100;i++) {
            if(a>=90) {
                System.out.print("A ");
                a+=1;
            }
            else if(a>=80) {
                System.out.print("B ");
                a+=1;
            }
            else if(a>=70) {
                System.out.print("C ");
                a+=1;
            }
            else if(a>=60) {
                System.out.print("D ");
                a+=1;
            }
            else {
                System.out.print("F ");
                a+=1;
            }
        }
    }
}