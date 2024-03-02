#include <stdio.h>

int main() {
	int tab[5] = {1,2,3,4,5};
	int w[5];
	for(int i = 0; i<5; i++) {
		w[i] = tab[i]*tab[i];
	}
	for(int j = 0; j<5; j++) {
		printf("%d ", w[j]);
	}
}
