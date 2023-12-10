#include <stdio.h>

int global = 5;

void printAddresses(int a, int b) {
    printf("After global address: %p\n", &a);
    printf("After local address: %p\n\n", &b);
}

int main() {
    int * ptrGlobal = &global;
    int local = *ptrGlobal;
    int * ptrLocal = &local;

    printf("Before global address: %p\n", ptrGlobal);
    printf("Before local address: %p\n\n", ptrLocal);

    printAddresses(*ptrGlobal, *ptrLocal);

    return 0;
}