#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    for(int i=a;i<=100;i++) {
        if(a>=90) {
            printf("A ");
            a+=1;
        }
        else if(a>=80) {
            printf("B ");
            a+=1;
        }
        else if(a>=70) {
            printf("C ");
            a+=1;
        }
        else if(a>=60) {
            printf("D ");
            a+=1;
        }
        else {
            printf("F ");
            a+=1;
        }
    }
    return 0;
}