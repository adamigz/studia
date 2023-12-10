#include <stdio.h>

void fill(int * first, int * last) {
    int n = last-first;
    int i = 0;
    while (i<=n)
    {
        *(first+i) = i+1;
        i++;
    }
}

int main() {
    int arrSize = 100;
    int arr[arrSize];
    fill(&arr[0], &arr[arrSize-1]);
    int * ptr = &arr;
    int i=0;
    while (i<arrSize)
    {
        printf("%d ", *(ptr+i));
        i++;
    }
    printf("\n");
}