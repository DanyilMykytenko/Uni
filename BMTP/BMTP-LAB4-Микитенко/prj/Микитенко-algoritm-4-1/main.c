#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    printf("��������� - ��������� ����� ��i�����, ������� ����. 2020 �i�.\n����������� ���������� - �������� ���������� ������������ � ������� ��������� � �������.\n\n");
    float y,z,sms,KnZ;
    printf("������ �������� y\n");
    scanf("%f", &y);
    printf("������ �������� z\n");
    scanf ("%f",&z);
    sms = y+z/5;
    KnZ = y*z-sms;
    y = z+sms;
    KnZ = KnZ*y;
    printf("%2.f, %2.f", sms, KnZ);
    printf("\nPress Enter to exit\n");
    system("pause");
}
