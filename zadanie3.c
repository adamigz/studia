#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int a, b;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    printf("Większa jest liczba %d", MAX(a, b));
    return 0;
}