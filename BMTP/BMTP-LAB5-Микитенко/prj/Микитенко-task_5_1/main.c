#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        char *locale = setlocale(LC_ALL, "");
        unsigned int AmountDecember, DeregisteredNow, RegisteredNow, BornNow, DiedNow, AmountNow, Diff;
        char display[1];
        printf("������ ���� ����������:\nChoose the language of the display:\n(�/e)\n");
        gets(display);
        while(0 < 1)
        {
            switch(display[0])
            {
                case('y'):
                    printf("����������� ��������� - ��������� ���������� ��������� ������ ������ �� 1 ����� ��������� ����� �� ��������� ��� ��������� ��� ��������� ������� ���������.\n");
                    printf("ϲ� ���������� - ��������� ����� �������.\n");
                    printf("������� ������������ ������������� ��������� �����������.\n");
                    printf("г� �������� - 2020.\n");
                    printf("������ �������� ���������� ��������� ������ ������ �� 1 ���� �.�.: ");
                    scanf("%d", &AmountDecember);
                    printf("������ ������� ��������, �� ������ �� 1 ���� ��������� ����� �.�. ������: ");
                    scanf("%d", &DeregisteredNow);
                    printf("������ ������� ��������, �� ������ �� 1 ����� ��������� ����� �.�. �������: ");
                    scanf("%d", &RegisteredNow);
                    printf("������ ������� ��������, �� ������ �� 1 ����� ��������� ����� �.�. ����������: ");
                    scanf("%d", &BornNow);
                    printf("������ ������� ��������, �� ������ �� 1 ����� ��������� ����� �.�. �������: ");
                    scanf("%d", &DiedNow);
                    AmountNow = AmountDecember - DeregisteredNow + RegisteredNow + BornNow - DiedNow;
                    if(AmountNow < 0 || AmountDecember < 0)
                        {
                            printf("�������: ���� ����������� ������ ���...");
                            return 0;
                        }
                    if(AmountNow > AmountDecember)
                        {
                            Diff = AmountNow - AmountDecember;
                            printf("\nʳ������ ��������� �� ����� ������: %d", AmountNow);
                            printf("\nʳ������ ��������� ������ � ����� � 1 ���� �.�. �� 1 ����� ��������� ����� �.�. ���������� �� %d\n", Diff);
                        }
                    if (AmountNow < AmountDecember)
                        {
                            Diff = AmountDecember - AmountNow;
                            printf("\nʳ������ ��������� �� ����� ������: %d", AmountNow);
                            printf("\nʳ������ ��������� ������ � ����� � 1 ���� �.�. �� 1 ����� ��������� ����� �.�. ���������� �� %d\n", Diff);
                        }
                    if (AmountNow == AmountDecember)
                        printf("\nʳ������ ��������� �� ��������.\n");
                    printf("\n�� ������ ��������� ��������� ��������? (�/�)\n");
                    gets(display);
                    switch(display[0])
                    {
                        case 'T':
                            getch();
                            return 0;
                        case 'H':
                            getch();
                            break;
                    }
                    break;
                case('e'):
                    printf("Assigned to the algorithm is the increase in the number of population of the region by the 1st number of the flow month and, in turn, the increase in the number of bags.\n");
                    printf("Name of the developer - Mykytenko Daniil Yuriyovych.\n");
                    printf("Student of the Central National Technical University.\n");
                    printf("Year of development - 2020.\n");
                    printf("Enter the total population of the region as of January 1 this year.: ");
                    scanf("%d", &AmountDecember);
                    printf("Enter the number of citizens who, as of January 1 of the current month of this year, was deregestered: ");
                    scanf("%d", &DeregisteredNow);
                    printf("Enter the number of citizens who, as of January 1 of the current month of this year, was regestered: ");
                    scanf("%d", &RegisteredNow);
                    printf("Enter the number of citizens who, as of January 1 of the current month of this year, was born: ");
                    scanf("%d", &BornNow);
                    printf("Enter the number of citizens who, as of January 1 of the current month of this year, died: ");
                    scanf("%d", &DiedNow);
                    AmountNow = AmountDecember - DeregisteredNow + RegisteredNow + BornNow - DiedNow;
                    if(AmountNow < 0 || AmountDecember < 0)
                        {
                            printf("Error: wrong input...");
                            return 0;
                        }
                    if(AmountNow > AmountDecember)
                        {
                            Diff = AmountNow - AmountDecember;
                            printf("\nThe number of inhabitants is currently: %d", AmountNow);
                            printf("\nThe number of residents of the region in the period from January 1 this year until the 1st of the current month this year increased by %d", Diff);
                        }
                    if (AmountNow < AmountDecember)
                        {
                            Diff = AmountDecember - AmountNow;
                            printf("\nThe number of inhabitants is currently: %d", AmountNow);
                            printf("\nThe number of residents of the region in the period from January 1 this year until the 1st of the current month this year decreased by %d", Diff);
                        }
                    if (AmountNow == AmountDecember)
                        printf("\nThe number of inhabitants has not changed.");
                    break;
                    printf("\nDo you want to exit from the programm? (Y/N)\n");
                    gets(display);
                    switch(display[0])
                    {
                        case 'Y':
                            getch();
                            return 0;
                        case 'N':
                            getch();
                            break;
                    }
                default:
                    break;
            }
        }
    return 0;
}
