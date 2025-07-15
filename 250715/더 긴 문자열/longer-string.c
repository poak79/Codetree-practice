#include <string.h>
#include <stdio.h>

int main() {
    char a[20];
    char b[20];

    scanf("%s %s", a, b);

    if(strlen(a)==strlen(b)) {
        printf("same");
    }
    else {
        printf("Coding 6");
    }
    return 0;
}