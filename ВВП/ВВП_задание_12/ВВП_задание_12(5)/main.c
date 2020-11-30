#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    char *arr[] = {"зеленой", "красной", "желтой", "белой", "черной"};
    char *arr1[] = {"зеленого", "красного", "желтого", "белого", "черного"};
    char *array[]={"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи"};
    int year,color,animal;
    scanf("%d", &year);//номер года
    //year должно начинаться с 1984
    if (year >=1984){
        year = (year-1984) % 60 + 1;
    }
    else{
        year = 61 -(1984-year) % 60;
    }
    color = (year-1) % 10 + 1;
    color = (color-1) / 2 + 1;
    animal = (year-1) % 12 + 1;

    //вывод
    if ((animal!=3)&&(animal!=4)&&(animal!=5))
        printf("год %s %s", arr[color-1], array[animal-1]);
    else
        printf("год %s %s", arr1[color-1], array[animal-1]);

    return 0;
}
