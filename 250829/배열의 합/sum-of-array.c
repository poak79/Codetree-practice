#include <stdio.h>

int main() {
    int num[4][4];
    int total=0;

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d ", &num[i][j]);
            total += num[i][j];
        }
        printf("%d\n", total);
        total=0;
    }


    return 0;
}