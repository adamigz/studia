#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj n:");
    scanf("%d", &n);

    if (n%2==0)
    {
        printf("Nie jest nieparzysta\n");
        main();
    }
    
    int middle = (n/2)+1;

    for (int y = 1; y <= n; y++)
    {   
        //o
        for (int i=0;i<abs(middle-y);i++)
        {
            printf("o");
        }
        //wzor
        for (int i = 0; i < n-abs(((middle-y)*2)); i++)
        {
            if (i%2==0)
            {
                printf("x");
            }
            else
            {
                printf("o");
            }
        }
        //o
        for (int i=0;i<abs(middle-y);i++)
        {
            printf("o");
        }
        printf("\n");
    }
    
}