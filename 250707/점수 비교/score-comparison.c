#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    int c,d;
    scanf("%d %d", &c, &d);

    if(a>c && b>d) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}