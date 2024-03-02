#include <stdio.h>

int main() {
	int n;
	printf("Podaj n: ");
	scanf("%d", &n);
	int tab[n];
	for (int i = 0; i<n; i++) {
		scanf("%d", &tab[i]);
	}
	printf("[");
	for (int j = 0; j<n; j++) {
		printf("%d, ", tab[j]);
	}
	printf("]\n");
}
