#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int val;
            if(j%2==0) {
                val = i+1;
            }
            else {
                val = n-i;
            }
            printf("%d", val);
        }
        printf("\n");
    }
    return 0;
}