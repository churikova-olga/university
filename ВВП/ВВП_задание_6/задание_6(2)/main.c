#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(0,"Russian");
    float A,B,C;
    printf("Введите А, B, C: ");
    scanf("%f%f%f", &A, &B, &C);
    A=B-A;
    B=B-A;
    A=B+A;
    C=A-C;
    A=A-C;
    C=A+C;
    printf("A = %.2f\nB = %.2f\nC = %.2f", A, B, C);
}
