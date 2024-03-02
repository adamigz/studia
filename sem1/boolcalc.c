#include <stdio.h>
#include <math.h>

int b1 = 2, b2;

int main() {
    if (b1==2) {
        printf("Podaj bit 1 i 2: ");
        scanf("%d %d", &b1, &b2);
    } else {
        printf("Podaj kolejny bit: ");
        scanf("%d", &b2);
    }

    int opt;

    printf("Select opration:\n1. AND\n2. OR\n3. NAND\n4. NOR\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("Result is %d\n", b1&&b2);
        b1 = b1&&b2;
        main();
        break;
    case 2:
        printf("Result is %d\n", b1||b2);
        b1 = b1||b2;
        main();
        break;
    case 3:
        printf("Result is %d\n", !(b1&&b2));
        b1 = !(b1&&b2);
        main();
        break;
    case 4:
        printf("Result is %d\n", !(b1||b2));
        b1 = !(b1||b2);
        main();
        break;
    
    default:
        main();
        break;
    }

    return 0;
}