#include <stdio.h>
#include <stdlib.h>
float RingS(float R1,float R2){
    float p=3.14;
    return p*(pow(R1,2)-pow(R2,2));
}
int main()
{
    float r1,r2;
    for(int i=0; i<3; i++){
        printf("Input r1 and r2(r1>r2): ");
        scanf("%f %f", &r1, &r2);
        if (r1>r2){
            printf("%f\n", RingS(r1,r2));
        }
        else{
            printf("Error\n");}
    }

    return 0;
}
