#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int a;
    printf("Введите число: ");
    scanf("%d", &a);
    if (a!=0){
        if(a%2!=0){
            if(a>0)
                printf("Число положительное нечетное");

            else
                printf("Число отрицательное нечетное");}
        else {
            if(a>0)
                printf("Число положительное четное");

            else
                printf("Число отрицательное четное");
    }
    }
    else
        printf("Нулевое число");
    return 0;
}
