#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A;
    printf("Введите A: ");
    scanf("%d", &A);
    if((A>9 && A<100)&&(A%2==0))
        printf("Число является четным двузначным");
    else
        printf("Число не является четным двузначным");
    return 0;
}
