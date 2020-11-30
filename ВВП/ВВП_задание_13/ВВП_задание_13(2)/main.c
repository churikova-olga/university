#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float sum = 1;
    int counter = 0, N;
    printf("Введите кол-во сомножителей(N>0): ");
    scanf("%d", &N);
    if (N>0){
    for (float i = 1.1; counter < N; i += 0.1)
    {
        printf("%.1f ", i);
        if (counter<N-1){
            printf("* ");
        }
        sum *= i;
        counter += 1;
    }
    printf("\nProduct %.2f ", sum);
    }
    else{
        printf("Ошибка");
    }
    return 0;
}
