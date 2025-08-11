#include <stdio.h>

int main() {
    int user_input;

    while(1) {
        scanf("%d", &user_input);

        if(user_input==25) {
            printf("Good\n");
            break;
        }

        if(user_input<25) {
            printf("Higher\n");
        }
        
        if(user_input>25) {
            printf("Lower\n");
        }
    }




    return 0;
}