#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
setlocale(0, "Russian");
float a,b,P,S;
printf("����� �������� � �������\n");
printf("������� a � b: ");
scanf("%f%f", &a,&b);
printf("S = a * b  ������� = %.2f\n", a*b);
printf("P = 2 * (a + b)  �������� = %.2f\n", 2 * (a + b));
fun2();
fun3();
fun4();
fun5();
return 0;
}
int fun2(){
float d, L, p = 3.14;
printf("����� ������ ����������\n");
printf("������� d: ");
scanf("%f", &d);
printf("L = p * d ������ = %.2f\n", p*d);
}
int fun3(){
float s,m;
printf("����� ������� ��������������\n");
printf("������� a � b: ");
scanf("%f%f", &s, &m);
printf("������� �������������� = %.2f\n", (s+m)/2);
}
int fun4(){
float k,j;
printf("����� �����, ��������, ������������ � ������� ���������\n");
printf("������� 2 �����: ");
scanf("%f%f", &k, &j);
printf("����� = %.2f\n", pow(k,2)+pow(j,2));
printf("�������� = %.2f\n", pow(k,2)-pow(j,2));
printf("������������ = %.2f\n", pow(k,2)*pow(j,2));
printf("������� = %.2f\n", pow(k,2)/pow(j,2));
}
int fun5() {
int x, y;
printf("����� �����, ��������, ������������ � ������� �������\n");
printf("������� 2 �����: ");
scanf("%d%d", &y, &x);
printf("����� = %d\n", abs(y)+abs(x));
printf("�������� = %d\n", abs(y)+abs(x));
printf("������������ = %d\n", abs(y)+abs(x));
printf("������� = %d\n", abs(y)+abs(x));
}


