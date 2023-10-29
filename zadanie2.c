#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Podaj a:");
    scanf("%d", &a);
    printf("Podaj b:");
    scanf("%d", &b);
    printf("Dodawnie: %d \n", (a+b));
    printf("Odejmowanie: %d \n", (a-b));
    printf("Mnozenie: %d \n", (a*b));
    printf("Dzielenie: %d \n", (a/b));
    printf("Reszta z dzielenia: %d \n", (a%b));
    return 0;
}