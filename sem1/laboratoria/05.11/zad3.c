#include <stdio.h>

int p(int a,int b) {
	int pow = a;
        for(int i = 1; i < b; i++) {
                pow *= a;
        }
        return pow;
}

int main() {
	int a, b;
	printf("Podaj a b: ");
	scanf("%d %d", &a, &b);
	int c=1;
	while (p(a,c) <= b) {
		c += 1;
	}
	printf("%d", c);
}
