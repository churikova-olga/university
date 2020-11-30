#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N, k=1;
    printf("Array size(N>0): ");
    scanf("%d", &N);
    int array[N];

    for (int i=0; i<N; i++){
        array[i]=k;
        k+=2;
    }

    for (int i=0; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
