#include <stdio.h>
#include <locale.h>
int arr[1000], i=0,j,s,n;
int main()
{
    setlocale(0,"Russian");
    fun1();
    for(i=0; i < n-1; i++){
        for(j=0; j < n-i-1; j++){
            if (arr[j]>arr[j+1]){
                s=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=s;
            }
        }
    }
    printf("\nОтсортированный массив: ");
    for(i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
    fun1(){
    printf("Укажите колличество элементов массива не больше 1000: ");
    scanf("%d", &n);
    printf("Заполненый массив: ");
    while(i < n){
        arr[i] = rand() %  1001;
        printf("%d ", arr[i]);
        i++;
    }
    }

