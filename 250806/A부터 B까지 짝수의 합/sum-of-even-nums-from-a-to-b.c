#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int total=0;

    for(int i=a;i<=b;i++) {
        if(i%2==1) {
            continue;
        } 
        total+=i;
    }
    printf("%d", total);


    return 0;
}