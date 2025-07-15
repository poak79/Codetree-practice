#include <string.h>
#include <stdio.h>

int main() {
    char a[20];
    char b[20];

    scanf("%s %s", a, b);

    if(strlen(a)==strlen(b)) {
        printf("same");
    }
    else if(strlen(a)>strlen(b)) {
        printf("%s %d", a, strlen(a));
    }
    else if(strlen(a)<strlen(b)) {
        printf("%s %d", b, strlen(b));
    }
    return 0;
}