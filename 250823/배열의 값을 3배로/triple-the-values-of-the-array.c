#include <stdio.h>

int main() {
    int num[3][3];
    int new_num[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d ", &num[i][j]);
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            new_num[i][j] = 3*num[i][j];     
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ", new_num[i][j]);   
        }
        printf("\n");
    }

    return 0;
}