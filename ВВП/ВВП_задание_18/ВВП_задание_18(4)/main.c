//  Дан массив размера N. Обнулить элементы массива,
// расположенные между его минимальным и максимальным элементами
//(не включая минимальный и максимальный элементы).

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,i,j,s;
    printf("Размер массива: ");
    scanf("%d", &N);
    int array[N];
    for(i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }
    for (i = 0; i < N; i++){
        if (i == 0 || i == N-1){
                continue;
        }
        else{
            if (array[i] > array[i-1] && array[i] < array[i+1]){
                array[i]=0;
                i+=1;
                }
        }
        }
    for (i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
