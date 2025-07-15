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
        printf("Coding %d", strlen(a));
    }
    else if(strlen(a)<strlen(b)) {
        printf("Coding %d", strlen(b));
    }
    return 0;
}