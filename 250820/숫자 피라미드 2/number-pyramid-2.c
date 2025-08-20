#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ctn=1;

    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++) {
            printf("%d ", ctn);
            ctn++;
        }
        printf("\n");
    }
    return 0;
}