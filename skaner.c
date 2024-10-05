#include <stdio.h>

int main() {
    int test=1;
    int *pointer = &test;
    int i = 0;
    while (1)
    {
        printf("%i\n", *(pointer+i));
        getchar();
        i++;
    }
    
}