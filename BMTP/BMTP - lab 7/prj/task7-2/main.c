#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <ctype.h>
#include <io.h>
#include <fcntl.h>

int main()
{
    char *locale = setlocale(LC_ALL,"");
    for(int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n� ����i� �������i ���������� ������� 15 �����.\
            \n� �������� ������� ������� �i���i��� �����, �� ����� 0, �� ����� �� ������ ������� ������� �� ����� �� �������.\n");
    for(int i = 0; i < 80; i++)
    {
        printf("-");
    }

    printf("\n����i� 1.0\n���������: ��������� ����� �������.\n����, 2021 �i�.\n");

    int arr[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 15; i++)
    {
        printf("������ ����� %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        {
            printf("���������� ����� ���.");
            return 0;
        }
    }

    for(int i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }

    int amount = 0;

    for(int i = 0; i < 15; i++)
    {
        if(arr[i] > arr[0] && arr[i] < arr[14])
            amount++;
    }
    printf("\nʳ������ �������� ������������� ����� - %d", amount);
}
