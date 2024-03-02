#include <stdio.h>

void printTable(char s[], int length) {
    
    printf("+");
    for (int i = 0; i<length-1; i++) {
        printf("-");
    }
    printf("+\n");

    printf("|");
    for (int i = 0; i<length-1; i++) {
    printf("%c", s[i]);
    }
    printf("|\n");

    printf("+");
    for (int i = 0; i<length-1; i++) {
        printf("-");
    }
    printf("+\n");
}

int main() {
    char s[] = "tabelka";
    int length = sizeof(s)/sizeof(s[0]);
    printTable(s, length);
}