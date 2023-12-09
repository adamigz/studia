#include <stdio.h>

void zwieksz(int *n) {
	printf("pod adresem %p jest %d\n\n", n, *n);
	*n = *n+1;
}

int main() {
	int liczba = 5;

	zwieksz(&liczba);

	printf("liczba = %d\n\n", liczba);
}