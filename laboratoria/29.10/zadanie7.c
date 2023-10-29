#include <stdio.h>
#include <stdbool.h>
int m31[] = {1,3,5,7,8,10,12};
bool specialMonth(int month) {
    for (int i = 0; i<(sizeof(m31)/sizeof(m31[0])); i++) {
        if(m31[i] == month) {
            return true;
        }
    }
    return false;
}
int main() {
    int year, month, day;
    printf("Podaj date w formacie dd mm yyyy: ");
    scanf("%d %d %d", &day, &month, &year);

    if(year%4==0) {
        //przestepny
        if(month==2) {
            //ilosc dni 1-29
            if(day>0 && day<30) {
                printf("Data poprawna");
            } else {
                printf("Data nie jest poprawna");
            }
        } else {
            if(specialMonth(month)){
                //dni 1-31
                if(day>0 && day<32) {
                    printf("Data poprawna");
                } else {
                    printf("Data nie jest poprawna");
                }
            } else {
                //dni 1-30
                if(day>0 && day<31) {
                    printf("Data poprawna");
                } else {
                    printf("Data nie jest poprawna");
                }
            }
        }
    } else {
        //nie przestepny
        if(month==2) {
            //ilosc dni 1-28
            if(day>0 && day<29) {
                printf("Data poprawna");
            } else {
                printf("Data nie jest poprawna");
            }
        } else {
            if(specialMonth(month)){
                //dni 1-31
                if(day>0 && day<32) {
                    printf("Data poprawna");
                } else {
                    printf("Data nie jest poprawna");
                }
            } else {
                //dni 1-30
                if(day>0 && day<31) {
                    printf("Data poprawna");
                } else {
                    printf("Data nie jest poprawna");
                }
            }
        }
    }
    
}