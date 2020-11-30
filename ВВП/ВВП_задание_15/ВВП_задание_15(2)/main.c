#include <stdio.h>
#include <locale.h>
int Sign(float x){
    if (x==0)
        return 0;
    else{
        if (x<0)
            return -1;
        else
            return 1;
    }
}
int main()
{
    setlocale(0,"Russian");
    float A,B;
    printf("Input A and B: ");
    scanf("%f %f", &A, &B);
    printf("Sign(A):%d\nSign(B):%d\nSign(A)+Sign(B):%d", Sign(A),Sign(B),Sign(A)+Sign(B));
    return 0;
}
