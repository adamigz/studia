#include <stdio.h>

int L(int n) {
    if (n==0)
    {
        return 2;
    }
    else if (n==1)
    {
        return 1;
    } 
    else
    {
        return L(n-1)+L(n-2);
    }    
}

int main() {
    printf("L(5) = %d\nL(10) = %d\n", L(5), L(10));
    return 0;
}