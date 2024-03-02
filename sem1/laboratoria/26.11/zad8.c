#include <stdio.h>
#include <string.h>

int helper_palindrome(char word[], int p, int k) {
    if(word[p]==word[k] && k-p>1) {
        return helper_palindrome(word, p+1, k-1);
    } else if(word[p]==word[k] && k-p<=1) {
        return 1;
    } else {
        return 0;
    }
}

int palindrome(char x[]) {
    return helper_palindrome(x, 0, strlen(x)-1);
}
 
int main() {
    char w[] = "kaja";
    printf("%d", palindrome(w));

    return 0;
}