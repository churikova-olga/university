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
        A[i]=i+1;
    }
    for (int i=0; i<N/2; i++){
        printf("%d %d ", A[i], A[N-i-1]);}
    if (N%2!=0){
        printf("%d ", A[N/2]);
    }

    return 0;
}
