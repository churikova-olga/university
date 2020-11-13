#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float N, sum = 1;
    int counter = 0;
    scanf("%f", &N);
    for (float i = 1.1; counter < N; i += 0.1)
    {
        printf("%.1f * ", i);
        sum *= i;
        counter += 1;
    }
    printf("\nProduct %.2f ", sum);
    return 0;
}
