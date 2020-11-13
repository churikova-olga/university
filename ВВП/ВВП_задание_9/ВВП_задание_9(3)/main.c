#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int K,m,N;
    printf("Введите число от 1-365: ");
    scanf("%d", &K);
    printf("Введите число от 1-7: ");
    scanf("%d", &N);
    if ((K>=1 && K<=365)&&(N>=1 && N<=7)){
        m=(K+N-2)%7+1;
        printf("Номер дня недели: %d", m);}
    else
        printf("Ошибка");
    return 0;
}
