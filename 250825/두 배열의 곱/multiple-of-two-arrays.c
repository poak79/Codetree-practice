#include <stdio.h>

int main() {
    int numf[3][3];
    int nums[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d ", &numf[i][j]);
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d ", &nums[i][j]);
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ", numf[i][j] * nums[i][j]);
        }
        printf("\n");
    }


    return 0;
}