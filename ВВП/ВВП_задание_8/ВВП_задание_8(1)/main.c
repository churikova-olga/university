#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int b;
    printf("Размер файла в байтах: ");
    scanf("%d", &b);
    printf("Размер файла в килобайтах: %d", b/1024);
    return 0;
}
