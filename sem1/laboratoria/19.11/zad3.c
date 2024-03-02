#include <stdio.h>

char getChar(char s[], int i) {
    return s[i];
}

int main() {
    char s[] = "siemano";
    printf("%c", getChar(s, 4));
}