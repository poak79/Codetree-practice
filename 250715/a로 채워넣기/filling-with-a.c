#include <string.h>
#include <stdio.h>

int main() {
    char src[100];
    scanf("%s", src);

    char a[strlen(src)+1];
    strcpy(a, src);

    a[1] = 'a';
    a[strlen(a)-2] = 'a';

    for(int i=0;i<strlen(a);i++) {
        printf("%c", a[i]);
    }
    
    return 0;
}