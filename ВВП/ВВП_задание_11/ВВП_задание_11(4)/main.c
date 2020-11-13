#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int x,y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    if (x>0){
        if (y>0)
            printf("Первая четверть");
        else
            printf("Четвертая четверть");
    }
    else{
        if (y>0)
            printf("Вторая четверть");
        else
            printf("Третья четверть");
    }
}

