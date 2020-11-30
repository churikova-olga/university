#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,b,a=0,k,x;
    printf("Size array N: ");
    scanf("%d", &N);
    int array[N];
    int d[N-1];
    for(int i = 0; i<N; i++){
        scanf("%d", &array[i]);
    }
    for(int j = 0; j<N-1; j++){
        d[j] = array[j+1]- array[j];
        k = d[j];
        if(k==0){
            printf("Одинаковые числа ");
            return 0;
        }
    }
    for(x = 0; x < N-1; x++){
        if(d[x] == d[x+1]){
            a += 1;
            k = d[x];
        }
    }

    if(a == N - 2){
        printf("%d", k);
    }
    else{
        printf("0");
}
    return 0;
}
