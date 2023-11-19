#include <stdio.h>

int main() {
	int x = 3;
	int y = 6;
	int tab[6][3] = { {1,0,1}, {0,1,0}, {1,0,1}, {0,1,0}, {1,0,1}, {0,1,0} };
	int px = x+2;
	//top line
	for(int i = 0; i<px; i++) {
		if(i == 0) {
			printf("+");
		} else if (i+1 == px) {
			printf("+\n");
		} else {
			printf("-");
		}
	}
	for(int i = 0; i<y; i++) {
		printf("|");
		for(int j = 0; j < x; j++) {
			tab[i][j] == 1 ? printf("x") : printf(" ");
		}
		printf("|\n");
	}
	//bottom line
	for(int i = 0; i<px; i++) {
		if(i == 0) {
			printf("+");
		} else if (i+1 == px) {
			printf("+\n");
		} else {
			printf("-");
		}
	}
}

