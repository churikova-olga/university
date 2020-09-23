#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
setlocale(0, "Russian");
float a,b,P,S;
printf("Найти периметр и площадь\n");
printf("Введите a и b: ");
scanf("%f%f", &a,&b);
printf("S = a * b  площадь = %.2f\n", a*b);
printf("P = 2 * (a + b)  периметр = %.2f\n", 2 * (a + b));
fun2();
fun3();
fun4();
fun5();
return 0;
}
int fun2(){
float d, L, p = 3.14;
printf("Найти длинну окружности\n");
printf("Введите d: ");
scanf("%f", &d);
printf("L = p * d длинна = %.2f\n", p*d);
}
int fun3(){
float s,m;
printf("Найти среднее арифметическое\n");
printf("Введите a и b: ");
scanf("%f%f", &s, &m);
printf("Среднее арифметическое = %.2f\n", (s+m)/2);
}
int fun4(){
float k,j;
printf("Найти сумму, разность, произведение и частное квадратов\n");
printf("Введите 2 числа: ");
scanf("%f%f", &k, &j);
printf("Сумма = %.2f\n", pow(k,2)+pow(j,2));
printf("Разность = %.2f\n", pow(k,2)-pow(j,2));
printf("Произведение = %.2f\n", pow(k,2)*pow(j,2));
printf("Частное = %.2f\n", pow(k,2)/pow(j,2));
}
int fun5() {
int x, y;
printf("Найти сумму, разность, произведение и частное модулей\n");
printf("Введите 2 числа: ");
scanf("%d%d", &y, &x);
printf("Сумма = %d\n", abs(y)+abs(x));
printf("Разность = %d\n", abs(y)+abs(x));
printf("Произведение = %d\n", abs(y)+abs(x));
printf("Частное = %d\n", abs(y)+abs(x));
}


