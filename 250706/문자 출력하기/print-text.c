#include <stdio.h>

int main() {
    int a;
    scanf("%C", &a);
    for(int i=0;i<8;i++) {
        printf("%C", a);
    }
    return 0;
}