//Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,i,j;
    printf("Введите размер массива: ");
    scanf("%d", &N);
    int A[N];

    for (i=0; i < N; i++){
        scanf("%d", &A[i]);
    }

    for (i=0; i < N-1; i++){
        for (j=i+1; j < N; j++){
            if (A[i]==A[j]){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}
