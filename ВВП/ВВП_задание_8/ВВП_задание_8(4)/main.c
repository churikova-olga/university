#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int b,a,c;
    printf("Введите двузначное число: ");
    scanf("%d", &a);
    if(a>9 && a<100){
        b=a%10;
        c=a/10;
        b=b*10;
        a=b+c;
    printf("Полученное число %d", a);
    }
    else
        printf("Ошибка");
    return 0;
}
