//��� ������������� ������ ������� N. ��������� ��� �������� �����, ������������ � �������,
//�� �������� �������� ���������� ��������� �����.
//���� �������� ����� � ������� �����������, �� �������� ������ ��� ���������

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int N,i,j,s;
    scanf("%d", &N);
    int array[N];
    for(i = 0; i < N; i++){
        array[i]=rand() % 100;
        printf("%d ", array[i]);
    }
    for (i = N-1; i >= 0; i--){
        if (array[i] % 2 != 0){
            s = array[i];
            printf("\n��������� �������� ������� %d\n", s);
            break;
        }
    }
    for(i = 0; i < N; i++){
        if (array[i] % 2 != 0){
            array[i] = s + array[i];
        }
        printf("%d ", array[i]);
    }
    return 0;
}
