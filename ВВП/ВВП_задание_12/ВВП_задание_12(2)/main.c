#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0, "Russian");
    char C;
    int N;
    printf("����� - north, �� - south, east - ������, west - �����\n");
    printf("������� ���� ������ n,s,e,w: ");
    scanf("%c", &C);
    printf("0 - ���� ������, 1 - ������� ������,(-1) - ������� �������\n");
    printf("������� 0,1,-1: ");
    scanf("%d", &N);
    printf("���������� ����������� ");
    switch(C)
    {
        case'e':
            if(N==0)
                printf("e");
            else{
                if(N==1)
                    printf("n");
                else{
                    if(N==-1)
                        printf("s");
                    else
                        printf("������");}}
            break;
        case's':
            if(N==0)
                printf("s");
            else{
                if(N==1)
                    printf("e");
                else{
                    if(N==-1)
                        printf("w");
                    else
                        printf("������");}}
            break;
        case'w':
            if(N==0)
                printf("w");
            else{
                if(N==1)
                    printf("s");
                else{
                    if(N==-1)
                        printf("n");
                    else
                        printf("������");}}
            break;
        case'n':
            if(N==0)
                printf("n");
            else{
                if(N==1)
                    printf("w");
                else{
                    if(N==-1)
                        printf("e");
                    else
                        printf("������");}}
            break;
        default:
            printf("������!");

    }
    return 0;
}
