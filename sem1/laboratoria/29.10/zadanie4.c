#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int a, b, c;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    printf("Podaj c: ");
    scanf("%d", &c);
    int biggest =  MAX(MAX(a, b), MAX(b, c));
    printf("Największa jest liczba %d", biggest);
    return 0;
}