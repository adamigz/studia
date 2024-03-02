#include <stdio.h>

int main() {
	int n;
	printf("Podaj n: ");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i*i;
	}
	printf("Suma kwadratów: %d", sum);
}
