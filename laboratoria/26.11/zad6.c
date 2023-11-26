#include <stdio.h>

int sum(int n) {
    if (n<10) {
        return n-((n/10)*10);
    } else {
        return (n-((n/10)*10))+sum(n/10);
    }
    
}
 
int main() {
    printf("%d", sum(370));
    return 0;
}