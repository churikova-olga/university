#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,K,L,j;
    float a = 0 ,b;
    printf("Size array N: ");
    scanf("%d", &N);
    printf("Input K and L(1<=K<=L<=N): ");
    scanf("%d %d", &K, &L);
    int array[N];

    for(int i = 1; i<=N; i++){
        array[i]=i;
    }

    if ((1<=K) && (K<=L) && (L<=N)){
        for(j = K; j<=L; j++){
            a = a + array[j];
            b+=1;
        }
        printf("%f ", a/b);
    }
    else{
        printf("Error");
    }
    return 0;
}
