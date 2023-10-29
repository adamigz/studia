#include <stdio.h>

int main() {
    int year;
    printf("Podaj rok: ");
    scanf("%d", &year);
    if(year%4 == 0) {
        printf("Ten rok jest przestepny\n");
    } else {
        printf("Ten rok nie jest przestepny\n");
    }
}