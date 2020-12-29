//1. Даны массивы A и B одинакового размера N. Поменять местами их
//содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,i,j;
    scanf("%d", &N);
    int A[N], B[N], C[N];
    printf("Массив A: ");
    for(i=0; i < N; i++){
        A[i] = rand() % 100;
        printf("%d ", A[i]);
        C[i]=A[i];
    }
    printf("\nМассив B: ");
    for(i=0; i < N; i++){
        B[i] = rand() % 100;
        printf("%d ", B[i]);
        A[i] = B[i];
        B[i] = C[i];
    }
    printf("\n\nМассив A: ");
    for(i=0; i < N; i++){
        printf("%d ", A[i]);
    }
    printf("\nМассив B: ");
    for(i=0; i < N; i++){
        printf("%d ", B[i]);
    }
    return 0;
}
