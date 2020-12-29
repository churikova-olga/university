//Дан целочисленный массив размера N. Удалить из массива все соседние одинаковые элементы, оставив их первые вхождения.

#include <stdio.h>
#include <locale.h>

int main()
{
    int N,i,k=0;
    scanf("%d", &N);
    int array[N];
    printf("Array: ");
    for (i=0; i<N; i++){
        array[i]= rand() % 4;
        printf("%d ", array[i]);
    }


    for (i=1; i<N; ++i){
            if (array[k]!=array[i]){
                ++k;
                array[k]=array[i];
           }
    }
    printf("\nNew array: ");
    for (i=0; i<k+1; ++i){
        printf("%d ", array[i]);
    }

    return 0;
}
