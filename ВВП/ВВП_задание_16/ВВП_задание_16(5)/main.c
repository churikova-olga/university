#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N;
    printf("Array size(N>0): ");
    scanf("%d", &N);
    int A[N];
    for (int i=0; i<N; i++){
        A[i]=i;
    }
    for (int i=0; i<N; i++){
        if (i%2!=0){
            printf(" %d ", A[i]);
        }
    }
    printf("\n");
    for (int j=N; j>=1; j--){
        if (j%2==0){
            printf("%d ", A[j]);
    }
    }

    return 0;
}
