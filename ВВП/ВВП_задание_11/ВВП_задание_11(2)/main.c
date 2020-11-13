#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A,B,C;
    printf("Введите A: ");
    scanf("%d", &A);
    printf("Введите B: ");
    scanf("%d", &B);
    printf("Введите C: ");
    scanf("%d", &C);
    if (A>=B&&A>=C){
        if (B>=C)
            printf("A+B=%d", A+B);
        else
            printf("A+C=%d", A+C);
    }
    else
        printf("B+C=%d", B+C);
    return 0;
}
