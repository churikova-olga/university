#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(0,"Russian");
    float V1,V2,S,T;
    printf("Скорость первого автомобиля (км/ч): ");
    scanf("%f", &V1);
    printf("Скорость второго автомобиля (км/ч): ");
    scanf("%f", &V2);
    printf("Расстояние между ними (км): ");
    scanf("%f", &S);
    printf("введите время (часы): ");
    scanf("%f", &T);
    S=T*(V1+V2)+S;
    printf("Расстояние между автомобилями через %.1f часов: %.2f", T, S);
}
