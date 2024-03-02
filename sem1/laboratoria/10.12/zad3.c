#include <stdio.h>

void swap(int * a, int * b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 8;
    int y = 10;
    printf("x: %d\n", x);
    printf("y: %d\n\n", y);

    swap(&x, &y);
    
    printf("x: %d\n", x);
    printf("y: %d\n\n", y);

    return 0;
}