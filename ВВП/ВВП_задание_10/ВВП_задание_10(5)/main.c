#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A,k,l,m,n;
    printf("Данное число читается одинаково слева направо и справа на лево");
    printf("Введите A: ");
    scanf("%d", &A);
    if (A>999 && A<10000){
    k=A/100;
    l=A%100;
    m=l/10;
    l=l%10;
    n=l*10+m;
    if(k==n)
        printf("Истина");
    else
        printf("Ложь");
    }
    else
        printf("Ошибка");
    return 0;
}
