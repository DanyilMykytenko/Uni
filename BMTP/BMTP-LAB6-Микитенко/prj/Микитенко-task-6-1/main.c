#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    char e;
    short n = 0, k = 0, c = 0;
    printf("����������� ��������� - ���������� ������� �����, �� ����� �� 1024\n");
    printf("��������� - ��������� ����� �������, ��������� ��������: freezeee682@gmail.com\n");
    printf("����� �������� - 1.0 2020 ����\n\n");
    for(;;)
    {
        printf("������ ������� �����, �� �� ������ ������: ");
        scanf("%hu", &n);
        if ( n > 100 || n < 1)
        {
            printf("\n�������: ������������ ����...\n\n");
            return 0;
        }
        for(int i = 0; i < n; i++)
        {
            printf("������ ����� � %d: ", i+1);
            scanf("%hu", &k);
            if (k < 1024)
                c++;
        }
        printf("\nʳ������ �����, �� ����� �� 1024, ���������: %d", c);
        printf("\n���� �� ������ ����� �� ��������, �������� J ��� L\n");
        scanf("%c", &e);
        scanf("%c", &e);
        switch (e)
        {
            case 'J':
                return 0;
            case 'L':
                return 0;
            default:
                continue;
        }
        getch();
    }
}
