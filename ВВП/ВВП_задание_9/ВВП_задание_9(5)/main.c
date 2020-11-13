#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int C,n,k;
    printf("Номер года: ");
    scanf("%d", &C);
    n=C/100;
    if (C%100==0){
        printf("Номер столетия %d", n);
    }
    else
        printf("Номер столетия %d", n+1);
    return 0;
}
