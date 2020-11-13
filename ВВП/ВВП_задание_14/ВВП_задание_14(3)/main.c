#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0, c = 1;
    int N;
    scanf("%d", &N);
    while (k < N) {
        k+=c;
        c+=1;
    }
    printf("%d %d",k, c-1);
    return 0;
}
