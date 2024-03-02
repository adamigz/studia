#include <stdio.h>

int main() {
	int a,b;
	printf("Podaj a, b: ");
	scanf("%d %d", &a, &b);
	int pow = a;
	for(int i = 1; i < b; i++) {
		pow *= a;
	}
	printf("Wynik: %d", pow);
}
