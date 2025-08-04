#include <stdio.h>

int main() {
    int s=0;
    int n;
    scanf("%d", &n);

    for(int i=1;i<=100;i++) {
        s+=i;
        if(s>=n) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}