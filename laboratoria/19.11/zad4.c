#include <stdio.h>

char getChar(char s[], int i) {
    return s[i];
}

int check(char a, char b) {
    return a == b;
}

int main() {
    int length;
    printf("Podaj ile znakow:\n");
    scanf("%d", &length);
    char s[length];
    printf("Podaj to slowo:\n");
    scanf("%s", s);
    int flag = 0;
    int i = 0;
    while (i<=length/2) {
        if (!check(getChar(s, i), getChar(s, length-1-i))) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag) {
        printf("To slowo nie jest palindromem");
    } else {
        printf("To slowo jest palindromem");
    }
}