#include <stdio.h>

int main() {
    int arr[10];
    int * ptrArr = &arr;
    int i = 0;
    while(i<10) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%d", ptrArr+i);
        i++;
    }
    i = 0;
    while(i<10) {
        printf("Liczba %d: %d\n", i+1, *(ptrArr+i));
        i++;
    }
    return 0;
}