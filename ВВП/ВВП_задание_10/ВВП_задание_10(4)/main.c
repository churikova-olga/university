#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A,k,l,m;
    printf("Введите трехзначное число: ");
    scanf("%d", &A);
    printf("Цифры данного числа образуют возрастающую или убывающую последовательность\n");
    if (A>99 && A<1000){
    k=A/100;
    l=A%100;
    m=l%10;
    l=l/10;
    if((k>l && l>m)|| (k<l && l<m))
        printf("Истина");
    else
        printf("Ложь");
    }
    else
        printf("Ошибка");
    return 0;
}
