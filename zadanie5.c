#include <stdio.h>

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
    printf("1. Podaje int\n2.Podaje char\n");
    scanf("%d", &opt);
    if(opt == 1) {
        printf("int z ascii: ");
        scanf("%d", &iascii);
        if(isAlphabetChar(iascii)){
            printf("Ten int reprezentuje znak z alfabetu w tablicy ASCII");
        } else {
            printf("Ten int nie reprezentuje znaku z alfabetu w tablicy ASCII");
        }
    }
    else if(opt == 2) {
        printf("char z ascii: ");
        scanf(" %c", &cascii);
        printf("%c", cascii);
        //cast to int and check 
        int iascii = 

    } else {
        printf("Zly wybor\n");
        main();
    }

}