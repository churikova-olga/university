#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(0, "Russian");
    int a,b,c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if(abs(b-a)!= abs(c-a)){
        if(abs(b-a) < abs(c-a))
            printf("точка b ближе, расстояние до точки a %d",abs(b-a));
        else
            printf("точка c ближе, расстояние до точки a %d",abs(c-a));
    }
    else
        printf("точка c и b находятся на одинаковом расстоянии до точки a %d",abs(c-a));
    return 0;
}
