#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i=1;i<b+1;i++) {
        printf("%d\n", b*i+a);
    }

    return 0;
}