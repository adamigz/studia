#include <stdio.h>

int tab[10] = {1,2,3,4,5,6,7,8,9,10};

int contains(int n, int i) {
    int size = sizeof(tab)/sizeof(tab[0]);
    if (i<size) {
        if (n==tab[i]) {
            return 1;
        } else {
            return contains(n, ++i);
        }
    } else {
        return 0;
    }
}

int main() {
    printf("7: %d\n", contains(7, 0));
    printf("20: %d", contains(20, 0));
    return 0;
}