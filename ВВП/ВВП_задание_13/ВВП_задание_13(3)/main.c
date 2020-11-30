#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(0, "Russian");
    int N, formula, i, counter = 0;
    printf("number input (N>0): ");
    scanf("%d", &N);
    formula = (2*N-1); // formula for finding the square of a number
    for (i = 1; i <=  formula; i += 2)
        printf ("%d\n", counter += i);

    printf("square of a number %d - %d",N, counter);
    return 0;
}
