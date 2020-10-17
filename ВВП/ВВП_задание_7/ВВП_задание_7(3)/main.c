#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float X, A, price, Y;
    printf("Введите вес конфет (кг): ");
    scanf("%f", &X);
    printf("Введите стоимость конфет (руб): ");
    scanf("%f", &A);
    price=A/X;
    printf("Стоимость 1 кг: %.2f", price);
    printf("\nВведите другой вес конфет (кг): ");
    scanf("%f", &Y);
    printf("Стоимость %.2f кг конфет: %.2f",Y, price*Y);
    return 0;
}
