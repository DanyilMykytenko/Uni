#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    char n;
    short k, c;
    for(;;)
    {
        printf("������ ������� �����, �� �� ������ ������:\n");
        scanf("%c", n);
        if ( n > 100 && n < 1)
        {
            printf("�������: ������������ ����...");
            return 0;
        }
        for(int i = 0; i < n; n++)
        {
            printf("������ ����� � %c:");
            scanf("%d", k);
            if (k < 1024) c++;
        }
        printf("ʳ������ �����, �� ����� �� 1024, ���������: %d", c);
        getch();
        printf("���� �� ������ ����� �� ��������, �������� J ��� L");
        scanf("%c", n);
        switch (n)
        {
            case 'J':
                break;
            case 'L':
                break;
        }
    }
    return 0;
}
