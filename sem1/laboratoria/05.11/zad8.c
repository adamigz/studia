#include <stdio.h>
int main() {
    printf("+---+---+\n");
    for (int i = 0; i<128; i++) {
        printf("|%3d|%3c|\n", i, (char) i);
        printf("+---+---+\n");
    }
}