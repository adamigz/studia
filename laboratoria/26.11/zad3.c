#include <stdio.h>

int set(int n) {
    if(n==1) {
        printf("1");
        return 0;
    } else {
        printf("%d, ", n);
        return set(n-1);
    }
}

int main() {
    set(10);
}