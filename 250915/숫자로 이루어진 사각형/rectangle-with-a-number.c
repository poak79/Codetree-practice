#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int num = 1;

    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            printf("%d ", num);
            num++;
            if(num==10) {
                num=1;
            }
        }
        printf("\n");
    }
    return 0;
}