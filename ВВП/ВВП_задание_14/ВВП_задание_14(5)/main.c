#include <stdio.h>
#include <locale.h>

int main()
{
    int a,b;
    printf("Введите а и b:");
    scanf("%d %d",&a, &b);
    while(a!=0 && b!=0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    printf("%d",a+b);
    return 0;
}
