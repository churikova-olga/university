#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int N;
    float A, square;
    printf("square number input N: ");
    scanf("%d", &N);
    printf("number input A: ");
    scanf("%f", &A);
    square = 1 - A;
    for (int i = 2; i <= N; i++)
    {
        square = square + pow(A, i);
    }
    printf("1-A^1+A^2+A^3+...+A^N %.2f", square);
    return 0;
}

