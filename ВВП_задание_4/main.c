#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Russian");
    float a,b, P, S;
    printf("Найти периметр и площадь\n");
    printf("Введите a и b: ");
    scanf("%f%f", &a,&b);
    printf("S = a * b  площадь = %.2f", a*b);
    printf("\nP = 2 * (a + b)  периметр = %.2f", 2*(a+b));
    fun2();
    fun3();
    fun4();
    fun5();
    return 0;
}
int fun2(){
    printf("\nНайти длинну окружности\n");
    float d, L, p = 3.14;
    printf("Введите L: ");
    scanf("%f", &d);
    printf("L = p * d  длинна = %.2f", p*d);
}
int fun3(){
    float s,m;
    printf("\nНайти среднее арифметическое\n");
    printf("Введите a и b: ");
    scanf("%f%f", &s, &m);
    printf("Среднее арифметическое = %.2f", (s+m)/2);
}
int fun4(){
    float k,j;
    printf("\nНайти сумму, разность, произведение и частное квадратов\n");
    printf("Введите 2 числа ");
    scanf("%f%f", &k, &j);
    printf("Сумма = %.2f\n", pow(k,2)+pow(j,2));
    printf("Разность = %.2f\n", pow(k,2)-pow(j,2));
    printf("Произведение = %.2f\n", pow(k,2)*pow(j,2));
    printf("Частное = %.2f\n", pow(k,2)/pow(j,2));
}
int fun5(){
    int y,x;
    printf("\nНайти сумму, разность, произведение и частное модулей\n");
    printf("Введите 2 числа: ");
    scanf("%d%d", &y, &x);
    printf("Сумма = %d\n", abs(y)+abs(x));
    printf("Разность = %d\n", abs(y)-abs(x));
    printf("Произведение = %d\n", abs(y)*abs(x));
    printf("Частное = %d\n", abs(y)/abs(x));
}
