//��� ������ ������� N, ��� �������� ��������, ����� �������,
//����������� �� �����������. ������� ������ �������������,
//���������� ������ ������� �� ����� �������.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,i,j,s;
    printf("������� ������ ������� ");
    scanf("%d", &N);
    int array[N];
    printf("������� 1 ������� ������� ");
    scanf("%d", &array[0]);
    for (i=1; i<N; i++){
        array[i]= i*2;
    }
    for (i = 0; i < N-1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                s = array[j];
                array[j] = array[j + 1];
                array[j + 1] = s;
                }
        }
    }
    for (i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
     return 0;

}
