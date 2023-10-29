#include <stdio.h>
#include <stdbool.h>

bool isAlphabetChar(int x) {
    if(x >= 65 && x<= 90 || x >= 97 && x <= 122) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int opt, iascii;
    char cascii;
    printf("1. Podaje int\n2. Podaje char\n");
    scanf("%d", &opt);
    if(opt == 1) {
        printf("int z ascii: ");
        scanf("%d", &iascii);
        if(isAlphabetChar(iascii)){
            printf("Ten int reprezentuje znak z alfabetu w tablicy ASCII\n");
        } else {
            printf("Ten int nie reprezentuje znaku z alfabetu w tablicy ASCII\n");
        }
    }
    else if(opt == 2) {
        printf("char z ascii: ");
        scanf(" %c", &cascii);
        int iascii = (int) cascii;
        if(isAlphabetChar(iascii)){
            printf("Ten char reprezentuje znak z alfabetu w tablicy ASCII\n");
        } else {
            printf("Ten char nie reprezentuje znaku z alfabetu w tablicy ASCII\n");
        }

    } else {
        printf("Zly wybor\n");
        main();
    }

}