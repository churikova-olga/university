#include <stdio.h>
#include <locale.h>
int Quarter(float x,float y){
    if (x>0){
        if (y>0){
            return 1;
        }
        else{
            return 4;
        }
    }
    else{
        if(y>0){
            return 2;
        }
        else{
            return 3;
        }
    }
}
int main()
{

    setlocale(0,"Russian");
    float a,b;
    for (int i=0; i<3; i++){
        printf("Input x and y(x!=0 or y!=0): ");
        scanf("%f %f", &a, &b);
        if (a!=0 && b!=0){
            printf("%d\n", Quarter(a,b));
        }
        else{
            printf( "Error: x = 0 or y = 0\n");
        }
    }
    return 0;
}
