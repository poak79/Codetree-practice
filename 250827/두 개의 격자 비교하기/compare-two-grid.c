#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int numf[n][m];
    int nums[n][m];
    int new_num[n][m];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d ", &numf[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d ", &nums[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            new_num[i][j] = (numf[i][j] != nums[i][j]) ? 1 : 0;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d ", new_num[i][j]);
        }
        printf("\n");
    }

    return 0;
}