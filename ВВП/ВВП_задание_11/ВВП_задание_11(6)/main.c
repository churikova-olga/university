#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int a;
    printf("Введите число в диапозоне от 1 до 999: ");
    scanf("%d", &a);
    if(a>0 && a<1000){
    if (a!=0){
        if(a%2!=0){
            if(a>0){
                if (a/100!=0)
                    printf("положительное нечетное трехначное число");
                else {
                    if (a/10!=0)
                        printf("положительное нечетное двузначное число");
                    else
                        printf("положительное нечетное однозначное число");
            }
            }
            else
                if (a/100!=0)
                    printf("отрицательное нечетное трехначное число");
                else {
                    if (a/10!=0)
                        printf("отрицательное нечетное двузначное число");
                    else
                        printf("отрицательное нечетное однозначное число");
                        }

        }
        else {
           if(a>0){
                if (a/100!=0)
                    printf("положительное четное трехначное число");
                else {
                    if (a/10!=0)
                        printf("положительное четное двузначное число");
                    else
                        printf("положительное четное однозначное число");
            }
            }
            else {
                if (a/100!=0)
                    printf("отрицательное четное трехначное число");
                else {
                    if (a/10!=0)
                        printf("отрицательное четное двузначное число");
                    else
                        printf("отрицательное четное однозначное число");
    }
    }
    }
    }
    else
        printf("Нулевое число");
    }
    else
        printf("Неверный диапозон");
    return 0;
}
