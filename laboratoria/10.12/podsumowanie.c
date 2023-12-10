#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 0;

void swap(int * a, int * b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void printTable(const char *str) {
    printf("\n");
    size_t length = strlen(str);
    printf("+");
    for (size_t i = 0; i < length + 2; i++) {
        printf("-");
    }
    printf("+\n");
    printf("| %s |\n", str);
    printf("+");
    for (size_t i = 0; i < length + 2; i++) {
        printf("-");
    }
    printf("+\n\n");
}

void showArray(int * array) {
    if(n==0) {
        printTable("Tablica jest pusta");
    } else {
        int i = 0;
        printf("\n\n----\n");
        while (i<n) {
            printf("%d ", *(array+i));
            i++;
        }
        printf("\n----\n\n");
    }
}

void addToArray(int * array) {
    if(n>=100) {
        printTable("W tablicy nie ma miejsca na nowy element");
    } else {
        printf("Podaj cyfrę do dodania: ");
        int digit;
        scanf("%d", &digit);
        printf("\n");
        if (digit<0 || digit>10) {
            printTable("Podana wartość nie jest cyfrą. Spróbuj jeszcze raz");
            addToArray(array);
        } else {
            *(array+n) = digit;
            n++;
            printTable("Dodano cyfrę do tablicy");
        }
    }
}

void removeFromArray(int * array) {

}

int main() {
    int arr[100];

    while(1) {
        int option;
        printf("Wybierz opcje:\n");
        printf("0. Zakończ program\n");
        printf("1. Wypisz elementy tablicy\n");
        printf("2. Dodaj element do tablicy\n");
        printf("3. Usuń element o danym indeksie\n");
        printf("4. Podaj sumę elementów\n");
        printf("5. Wypisz elementy jako drzewo binarne\n");
        
        scanf("%d", &option);
        system("clear");

        switch (option)
        {
        case 0:
            printTable("Koniec programu");
            return 0;
            break;
        case 1:
            showArray(&arr);
            break;
        case 2:
            addToArray(&arr);
            break;
        case 3:
            removeFromArray(&arr);
            break;
        case 4:

            break;
        case 5: 

            break;
        default:
            printTable("Wybrano niepoprawną opcję. Wybierz jeszcze raz");        
            break;
        }
    }
    return 0;
}