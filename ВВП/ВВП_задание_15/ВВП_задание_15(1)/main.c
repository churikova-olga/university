#include <stdio.h>
#include <locale.h>

float PowerA3(float A,float B){
    return B=pow(A,3);
}
int main()
{
    setlocale(0,"Russian");
    float a, b;
    for(int i = 0; i<5; i++){
        printf("Введите число: ");
        scanf("%f", &a);
        printf("a^3 = %f\n", PowerA3(a,b));
    }



    return 0;
}
