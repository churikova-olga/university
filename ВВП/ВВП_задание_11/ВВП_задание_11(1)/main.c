#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int A,B;
    printf("Введите A: ");
    scanf("%d", &A);
    printf("Введите B: ");
    scanf("%d", &B);
    if(A!=B){
        printf("A!=B\n");
        if(A>B){
            B=A;
            printf("A>B\nА: %d B: %d", B, A);
        }
        else{
            A=B;
            printf("A<B\nА: %d B: %d", B, A);
        }
    }
    else{
        A=B=0;
        printf("A==B\nА: %d B: %d", B, A);
    }
    return 0;
}
