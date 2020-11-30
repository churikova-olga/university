#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float p, S=1000,max=1100;
    int K=0;
    printf("Введите процент (0<p>25): ");
    scanf("%f", &p);
    if (0<p && p<25){
        while (S<max){
            K+=1;
            S=S+S*p/100;
        }
         printf("Кол-во месяцев %d размер вклада %f", K,S);
    }
    else
        printf("Ошибка");
    return 0;
}
