#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
    int index;
    printf("Podaj index elementu do usunięcia: ");
    scanf("%d", &index);
    if (index < 0 || index >= n)
    {
        printTable("Taki index jest niepoprawny. Sprobuj jeszcze raz");
        removeFromArray(array);
    }
    *(array+index) = 0;
    while (index<n)
    {
        *(array+index) = *(array+index+1);
        index++;
    }
    n -= 1;
    printTable("Element został usunięty");
}

void getSumOfArray(int * array) {
    int sum = 0;
    int i = 0;
    while (i<n)
    {
        sum += *(array+i);
        i++;
    }
    char text[38];
    sprintf(text, "Suma elementow tej tablicy wynosi %d", sum);
    printTable(text);
}

void calcTreeDepth(int * d) {
    int i = 0;
    while(n>pow(2, i)) {
        i++;
    }
    *d = i;
}

void printTreeRow(int * array, int elements, int buffer) {
    printf("row");
    if(buffer>0) {
        int i=0;
        while(i<buffer) {
            printf(" ");
            i++;
        }
        int i = 0;
        while (i<elements) {
            printf("%d ", *(array+i));
            i++;
        }
        printf("\n");
    } else {
        int i=0;
        int i = 0;
        while (i<elements) {
            printf("%d ", *(array+i));
            i++;
        }
        printf("\n");
    }
}

void printBinaryTree(int * array) {
    int d;
    calcTreeDepth(&d);
    int w = pow(2, d-1)/2;
    int i = 0;
    while (i<d) {
        printTreeRow(array+(int)pow(2, i)-1, pow(2, i), w-(pow(2, i)*2)-1);
        i++;
    }
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
            getSumOfArray(&arr);
            break;
        case 5: 
            printBinaryTree(&arr);
            break;
        default:
            printTable("Wybrano niepoprawną opcję. Wybierz jeszcze raz");        
            break;
        }
    }
    return 0;
}