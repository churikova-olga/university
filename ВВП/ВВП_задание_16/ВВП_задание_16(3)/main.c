#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(0,"Russian");
    int N,A,B;
    printf("Array size(N>2): ");
    scanf("%d", &N);
    int array[N];
    printf("A and B: ");
    scanf("%d %d",&A, &B);
    int K=A+B;
    array[0]= A;
    array[1]= B;
    for (int i=2; i<N; i++){
        array[i]= K;
        K+=K;
    }

    for (int i=0; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
