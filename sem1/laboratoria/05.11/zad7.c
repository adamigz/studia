#include <stdio.h>

int main() {
    printf("Podaj n: ");
    int n;
    scanf("%d", &n);
    if (n<=2) {
        printf("Liczba nie jest pierwsza");
    } else {
        int flag = 1;
        for (int i = 2; i < n; i++) {
            if(n%i==0) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("Liczba jest pierwsza");
        } else {
            printf("Liczba nie jest pierwsza");
        }
    }
}