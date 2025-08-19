#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    int res=0;

    for(int i=start;i<=end;i++) {
        int cnt=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0) {
                cnt++;
            }
        }
        if(cnt==3) {
            res++;
        }
    }
    printf("%d", res);

    return 0;
}