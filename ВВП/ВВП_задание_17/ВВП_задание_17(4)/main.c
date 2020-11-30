//Дан массив размера N. Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int N,i;
    printf("Введите размер массива: ");
    scanf("%d", &N);
    int A[N];

    for (i=0; i < N; i++){
        scanf("%d", &A[i]);
    }

    for (i=N-1; i >= 0; i-=1){
       if (i==N-1){
            if(A[i]>A[i-1]){
                printf("%d", i);
                break;
            }
        }
        else{
            if(i!=0){
                if(A[i]> A[i+1]&& A[i]>A[i-1]){
                    printf("%d", i);
                    break;
                }
            }
            else{
                if(A[i]>A[i+1]){
                    printf("%d", i);
                    break;
                }
                printf("Нет");
            }
        }



    }

    return 0;
}
