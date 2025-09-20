#include <stdio.h>

int print(int a, int b) {
    int num=0;
    scanf("%d %d", &a, &b);

    for(int i=1; i<12; i++) {
        if(a%i==0 && b%i==0) {
            num=i;
        }
    }
    return num;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", print(n, m));
    
    return 0;
}