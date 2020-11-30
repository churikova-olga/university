#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(0,"Russian");
    int N,A,D,k=1;
    printf("Array size(N>1): ");
    scanf("%d", &N);
    int array[N];
    printf("A and D: ");
    scanf("%d %d",&A, &D);
    for (int i=0; i<N; i++){
        array[i]=A;
        A=A*pow(D,k);
        k+=1;
    }

    for (int i=0; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
