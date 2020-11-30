#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(0, "Russian");
    int A, B, C=0;
    printf("A<B\n");
    printf("number input A: ");
    scanf("%d", &A);
    printf("number input B: ");
    scanf("%d", &B);
    if(A<B){
        while(A <= B){
            if (C != A)
            {
                printf("%d", A);
                C++;
            }
            else
            {
                C=0;
                A++;
                printf("\n");
            }
        }
    }
    else{
        printf("Error");
    }
    return 0;
}

