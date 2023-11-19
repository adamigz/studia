#include <stdio.h>

int check(char a, char b) {
    return a == b;
}

int main() {
    char a, b;
    printf("Podaj znaki a i b\n");
    scanf("%c %c", &a, &b);
    printf("%d", check(a, b));
}