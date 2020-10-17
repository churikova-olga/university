#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float A, B, x;
    printf("A*x+B=0\n");
    printf("Введите A, A!=0: ");
    scanf("%f", &A);
    if (A!=0){
        printf("Введите B: ");
        scanf("%f", &B);
        x=-B/A;
        printf("Линейное уравнение равно: %.2f", x);
    }
    else
        printf("Ошибка");
}
