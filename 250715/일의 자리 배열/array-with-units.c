#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[10];
    arr[0] = a;
    arr[1] = b;

    for(int i=2; i<10;i++) {
        arr[i] = (arr[i-2]+arr[i-1])%10;
    }
    
    for(int i=0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}