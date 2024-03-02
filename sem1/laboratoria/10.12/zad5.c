#include <stdio.h>

void swap(int * a, int * b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void sort(int * a, int * b, int * c) {
    if (*a < *b)
    {
        if (*c < *a)
        {
            printf("c a b\n");
            swap(a, b);
            swap(c, a);
        }
        else 
        {
            if (*c < *b)
            {
                printf("a c b\n");
                swap(b, c);
            }
        }
    }
    else
    {
        if (*c > *a)
        {
            printf("b a c\n");
            swap(a, b);
        }
        else 
        {
            if (*c < *b)
            {
                printf("c b a\n");
                swap(a, c);
            }
            else
            {
                printf("b c a\n");
                swap(a, b);
                swap(b, c);
            }
        }
    }
    
}

int main() {
    int a = 2;
    int b = 3;
    int c = 1;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n", c);

    sort(&a, &b, &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n", c);

    return 0;
}