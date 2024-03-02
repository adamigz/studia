#include <stdio.h>

void printBin(int n) {
    if (n>=1) {
         printBin(n/2);
         printf("%d", n%2);
    }
}
int main() {
    printBin(153);
}