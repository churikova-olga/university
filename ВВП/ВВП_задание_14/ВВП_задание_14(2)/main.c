#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A,B,C=0,N=0;
    printf("segment length input A: ");
    scanf("%d", &A);
    printf("segment length input B: ");
    scanf("%d", &B);
    while (A <= B){
        N+=A;
        if (N <= B)
            C=N;

        else
            A=N;
    }
    printf ("%d ", B-C);
    return 0;
}
