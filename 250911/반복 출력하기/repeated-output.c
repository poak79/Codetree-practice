#include <stdio.h>

void Lines(int n) {
    for(int i=0;i<n;i++) {
        printf("12345^&*()_");
        printf("\n");
    }
}

int main() {
    int row_num;
    scanf("%d", &row_num);
    Lines(row_num);
    return 0;
}