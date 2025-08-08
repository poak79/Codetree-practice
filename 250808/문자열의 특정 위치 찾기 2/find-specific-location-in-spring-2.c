#include <stdio.h>
#include <string.h>

int main() {
    char sen[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt=0;
    char n;
    scanf("%c", &n);

    for(int i=0;i<5;i++) {
        for(int j=2;j<4;j++) {
            if(sen[i][j]==n) {
                printf("%s\n", sen[i]);
                cnt++;
                break;
            }
        }
    }
    printf("%d", cnt);
    
    return 0;
}