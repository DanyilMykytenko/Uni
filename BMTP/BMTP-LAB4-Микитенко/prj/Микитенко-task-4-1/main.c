#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL,"");
    printf("��������� - ��������� ����� ��i�����, ������� ����. 2020 �i�.\n����������� ���������� - ��������� ��'�� �������������� ����, �� ���� ��i� ��������, �� ���� �� ������.\n\n");
    double gasval = 4.7193;
    double last, cur, vol;
    printf("����i�� ��������� �i�������� �� ������� �i����:\n");
    scanf("%lf", &last);
    if(last<0)
    {
        printf("��������� �i�������� �� ������ ���� ����� ����");
        return 0;
    }
    printf("����i�� ������i ��������� �i��������:\n");
    scanf("%lf", &cur);
    if(cur<0)
    {
        printf("��������� �i�������� �� ������ ���� ����� ����");
        return 0;
    }
    vol = (cur-last)*gasval;
    double dig = cur-last;
    if(last==cur)
    {
        printf("�� ������ ���� �i����\n\n");
        printf("Press Enter for exit\n");
        system("pause");
        return 0;
    }
    if(vol<0) printf("�������: ������� ����� �� ���� ���� ������ �� ������\n\n");
    else printf("���������� %2.lf ���i���� �����. �� ������: %2.lf ���\n\n", dig, vol);
    printf("��� ���������� �������� Enter\n");
    system("pause");
    return 0;
}
