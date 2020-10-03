#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(0,"Russian");
    float A,B;
    printf("Введите А и B: ");
    scanf("%f%f", &A, &B);
    A=B-A;
    B=B-A;
    A=B+A;
    printf("A = %.2f\nB = %.2f", A, B);
}
