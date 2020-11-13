#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(0,"Russian");
    int A,B,C, n, Sp, Sk;
    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    printf("C: ");
    scanf("%d", &C);
    n=(A/C)*(B/C);
    Sk=C*C*n;
    Sp=A*B;
    printf("Количество квадратов размещенных на прямоугольнике: %d\nнезанятая часть прямоугольника: %d",n, Sp-Sk);
    return 0;
}
