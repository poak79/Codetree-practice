#include <stdio.h>

int main() {
    int th=0;
    int fif=0;
    int num[10];

    for(int i=0;i<10;i++) {
        scanf("%d", &num[i]);
        if(num[i]%3==0) {
            th+=1;
        }
        if(num[i]%5==0) {
            fif+=1;
        }
    }
    printf("%d %d", th, fif);


    return 0;
}