#include <stdio.h>

int main() {
    int num[4][4];
    int sum=0;

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d", &num[i][j]);
            if(j<=i)
                sum+=num[i][j];
        }
        
    }

    printf("%d", sum);       

    return 0;
}