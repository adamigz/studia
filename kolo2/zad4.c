#include <stdio.h>

void assign_max(int *arr, int *target, int size) {
    int i=0;
    while (i<size)
    {
        if (*target<*(arr+i))
        {
            *target = *(arr+i);
        }
        i++;
    }
}

int main() {
    int arr[5] = {5,26,2,8,1};
    
    int max;
    assign_max(arr, &max, 5);

    printf("Najwieksza wartosc z tablicy to %d\n", max);

    return 0;
}