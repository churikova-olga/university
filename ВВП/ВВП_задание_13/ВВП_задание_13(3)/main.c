#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int N, formula, i, counter = 0;
    printf("number input N: ");
    scanf("%d", &N);
    formula = (2*N-1); // formula for finding the square of a number
    for (i = 1; i <=  formula; i += 2)
        printf ("%d\n", counter += i);

    printf("square of a number N %d", counter);
    return 0;
}
