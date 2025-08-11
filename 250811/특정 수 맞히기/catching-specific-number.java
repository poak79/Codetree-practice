import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true) {
            int user_input = sc.nextInt();

            if(user_input==25) {
                System.out.println("Good");
                break;
            }

            if(user_input<25) {
                System.out.println("Higher");
            }

            if(user_input>25) {
                System.out.println("Lower");
            }
        
        }
    }
}