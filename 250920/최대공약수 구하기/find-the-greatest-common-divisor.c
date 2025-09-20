#include <stdio.h>

int print(int a, int b) {
    int num=0;

    for(int i=1; i<a; i++) {
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