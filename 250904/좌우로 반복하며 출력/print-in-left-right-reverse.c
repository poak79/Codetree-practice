#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num[n][n];

    int cnt = 1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            num[i][j] = cnt;
            cnt++;
        }
        cnt=1;
    }

    for(int i=0;i<n;i++) {
        if(i%2 != 0) {
            for(int j=n-1;j>=0;j--) {
                printf("%d", num[i][j]);
            }
            printf("\n");
        }
        else {
            for(int j=0;j<n;j++) {
                printf("%d", num[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}