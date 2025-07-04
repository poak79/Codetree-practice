#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int total = a+b;
    double average = (double)total / 2;
    printf("%d %.1lf", total, average);
    return 0;
}