#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int b;
    printf("������ ����� � ������: ");
    scanf("%d", &b);
    printf("������ ����� � ����������: %d", b/1024);
    return 0;
}
