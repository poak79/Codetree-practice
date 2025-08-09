#include <stdio.h>

int main() {
    int user_input;
    while(1) {
        scanf("%d", &user_input);

        if(user_input==0)
            break;

        printf("%d\n", user_input);
    }





    return 0;
}