#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    float price, weight = 1;
    printf("Price for one kg ");
    scanf("%f", &price);
    printf ("1.0 - %.2f\n", price);
    for (float i = 0.1; i <= weight; i+=0.1)
        printf("%.1f - %.2f\n", i, price * i);
    return 0;
}
