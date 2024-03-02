#include <stdio.h>

int main() {
    int normal = 1;
    int *pointer = &normal;

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *pArr = &arr;

    printf("normal: %d\n&normal: %p\n*normal: argument * musi być wskaźnikiem a jest typu int\npointer: %p\n&pointer: %p\n*pointer: %d\n\n", normal, &normal, pointer, &pointer, *pointer);

    printf("arr[0]: %d\narr[1]: %d\n*pArr: %d\n*(pArr+1): %d\n", arr[0], arr[1], *pArr, *(pArr+1));

    return 0;
}