import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true) {
            int user_input = sc.nextInt();

            if(user_input==0)
                break;
            
            System.out.println(user_input);
        }
        
    }
}