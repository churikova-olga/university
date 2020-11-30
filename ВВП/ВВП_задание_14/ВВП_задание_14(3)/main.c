#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0, c = 0;
    int N;
    printf("Введите N(N>1): ");
    scanf("%d", &N);
    if (N>1){
    while (k < N) {
        c+=1;
        k+=c;

    }
    printf("Сумма %d наименьшее число %d",k, c);
    }
    else{
        printf("Ошибка");
    }
    return 0;
}
