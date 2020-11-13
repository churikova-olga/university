#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N;
    printf("Сколько секунд прошло с начала суток: ");
    scanf("%d",&N);
    printf("С начала последней минуты прошло %d секунд", N%60);
    return 0;
}
