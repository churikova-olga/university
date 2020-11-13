#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int K,n;
    printf("Введите число от 1-365: ");
    scanf("%d", &K);
    if (K>=1 && K<=365){
    n=K%7;
    printf("Номер дня недели: %d", n);
    switch(n){
    case 0:
    printf("\nВоскресенье");
    break;
    case 1:
    printf("\nПонедельник");
    break;
    case 2:
    printf("\nВторник");
    break;
    case 3:
    printf("\nСреда");
    break;
    case 4:
    printf("\nЧетверг");
    break;
    case 5:
    printf("\nПятница");
    break;
    case 6:
    printf("\nСуббота");
    break;
    }
    }
    else
        printf("Ошибка");

    return 0;
}
