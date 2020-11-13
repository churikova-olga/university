#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A, B, C;
    printf("Проверить истинность A<B<C\n");
    printf("Введите A: ");
    scanf("%d", &A);
    printf("Введите B: ");
    scanf("%d", &B);
    printf("Введите С: ");
    scanf("%d", &C);
    if (A<B && B<C)
        printf("Истина");
    else
        printf("Ложь");
    return 0;
}
