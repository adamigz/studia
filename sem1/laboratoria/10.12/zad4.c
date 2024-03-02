#include <stdio.h>

void max(int * ptr, int size) {
    int i = 1;
    int * maxPtr = ptr;
    while(i<size) {
        if(*(ptr+i) > *maxPtr) {
            maxPtr = ptr+i;
        }
        i++;
    }
    *maxPtr = 0;
}

int main() {
    int arr[10] = {10, 3, 15, 47, 21, 9, 65, 89, 37, 52};
    int i = 0;
    int * arrPtr = &arr;
    while(i<10) {
        printf("%d ", *(arrPtr+i));
        i++;
    }
    printf("\n");

    max(arrPtr, 10);

    i = 0;
    while(i<10) {
        printf("%d ", *(arrPtr+i));
        i++;
    }
    printf("\n");

    return 0;
}