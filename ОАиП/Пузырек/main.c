#include <stdio.h>
#include <locale.h>
int arr[1000], i=0,j=0,s,n;
int main()
{
    setlocale(0,"Russian");
    printf("Длина массива: ");
    scanf("%d", &n);
    while(i<n){
        arr[i]=rand()%1001;
        printf("%d ", arr[i]);
        i++;
    }
    i=0;
    while( i < n-1){
        while (j < n-i-1){
            if (arr[j]>arr[j+1]){
                s=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=s;
            }
            j++;
        }
        j=0;
        i++;

    }
    i=0;
    printf("\nОтсортированный массив: ");
    while(i < n){
    printf("%d ", arr[i]);
    i++;
    }
    return 0;
}


