#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A, B;
    printf("Проверить истинность A>2 и B<=3\n");
    printf("Введите A: ");
    scanf("%d", &A);
    printf("Введите B: ");
    scanf("%d", &B);
    if (A>2 && B<=3)
        printf("Истина");
    else
        printf("Ложь");
    return 0;
}
