//Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,i,b;
    printf("Введите размер массива: ");
    scanf("%d", &N);
    int A[N];

    for (i=0; i < N; i++){
        A[i]=i+1;
        printf("%d ", A[i]);
    }

    b=A[1];

    for (i=1; i < N; i+=2){
        if (b > A[i]){
            b=A[i];
        }
    }
    printf("\nМинимальный четный элемент: %d", b);
    return 0;
}
