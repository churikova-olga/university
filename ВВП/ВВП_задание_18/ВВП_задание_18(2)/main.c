//2. Дан массив A размера N. Сформировать новый массив B
// того же размера по следующему правилу: элемент BK равен
//среднему арифметическому элементов массива A с номерами от 1 до K.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,K,s,j,i;
    scanf("%d", &N);
    int A[N], B[N];

    for(i = 0; i < N; i++){
        A[i] = rand() % 100;
        printf("%d ", A[i]);
    }
    printf("\n");
    for(i=0; i < N; i++){
        K=0;
        s=0;
        for(j=0; j <=i; j++){
            s = s + A[j];
            K++;
        }
        B[i]=s/K;
        printf("%d ", B[i]);
    }

    return 0;
}
