#include <stdio.h>
int dodawanie(int a, int b) {
    return a+b;
}
int odejmowanie(int a, int b) {
    return a-b;
}
int mnozenie(int a, int b) {
    return a*b;
}
int dzielenie(int a, int b) {
    return a/b;
}

int main() {
    int a, b, opt;
    printf("Podaj a:");
    scanf("%d", &a);
    printf("Podaj b:");
    scanf("%d", &b);
    printf("Wybierz dzialanie:\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n");
    scanf("%d", &opt);
    switch (opt) {
    case 1:
        printf("%d", dodawanie(a, b));
        break;
    case 2:
        printf("%d", odejmowanie(a, b));
        break;
    case 3:
        printf("%d", mnozenie(a, b));
        break;
    case 4: 
        printf("%d", dzielenie(a, b));
        break;
    default:
        printf("Zla opcja");
        break;
    }
}