#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,k=2,F1=1,F2=1;
    printf("11235.....\n");
    printf("Введите число фибоначчи: ");
    scanf("%d", &N);
    while (N>F2){
        F2=F2+F1;
        F1=F2-F1;
        k+=1;
    }
    if(N==1){
        printf("Порядковый номер 1 и 2");
    }
    else{
        if(F2==N){
            printf("Порядковый номер %d", k);
        }
        else{
            printf("Число не фибоначчи");
        }
    }
    return 0;
}
