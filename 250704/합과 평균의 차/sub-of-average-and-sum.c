#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int total = a+b+c;
    int average = total/3;
    int totals = total - average;

    printf("%d\n%d\n%d", total, average, totals);
    return 0;
}