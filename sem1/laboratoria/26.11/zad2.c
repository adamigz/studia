#include <stdio.h>

int nwd(int a, int b) {
    if (a!=b) {
        return nwd(a>b ? a-b : a, b>a ? b-a : b);
    }
    return a;
}

int main() {
printf("%d", nwd(3, 2));
}