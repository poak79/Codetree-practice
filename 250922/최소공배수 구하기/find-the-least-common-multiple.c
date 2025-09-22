#include <stdio.h>

int gcd(int a, int b) {
    while (b!=0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a*b) / gcd(a, b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    printf("%d", lcm(n, m));
    
    return 0;
}