#include <stdio.h>
#include <stdlib.h>
float Fact2(int N){
    int a=1;
    int i;
    if (N%2==0){
        i=2;
    }
    else{
        i=1;
    }
    for(;i<=N; i+=2){
        a=a*i;
    }
    return a;
}
int main()
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    if(n>0){
        printf("%d!! = %f", n, Fact2(n));
    }
    else{
        printf("Error");
    }
    return 0;
}
