#include <stdio.h>
int sum(int *arr, int size) {
    int i, sum = 0;
    while (i < size)
    {
        sum+=*(arr+i);
        i++;
    }

    return sum;
}

int main() {
    int arr[3][3][3] = {
        {
            {
                0, 2, 3
            },
            {
                4, 5, 6
            },
            {
                7, 8, 9
            }
        },
        {
            {
                4, 5, 6
            },
            {
                7, 0, 9
            },
            {
                1, 2, 3
            }
        },
        {
            {
                7, 0, 9
            },
            {
                1, 2, 3
            },
            {
                4, 5, 0
            }
        }
    };

    int x,y,z;
    printf("Wspolrzedne o wartosci 0:\n(0,0,0)\n(1,1,1)\n(2,2,2)\n(2,0,1)\nPodaj x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (arr[x][y][z] == 0) 
    {
        printf("Jest 0!\nSuma elementów to %d\n", sum(arr[x][y], 3));
    } else 
    {
        printf("Na danej wspolrzednej nie ma 0\n");
    }
}