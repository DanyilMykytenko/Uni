    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main()
    {
        char *locale = setlocale(LC_ALL, "");
        int AmountDecember, DeregisteredNow, RegisteredNow, BornNow, DiedNow, AmountNow, Diff;
        char display[11];
        printf("������ ���� ����������:\nChoose the language of the display:\n(�/e)\n");
        gets(display);
        switch(display[0])
        {
            case('y'):
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
                        printf("\nʳ������ ��������� ������ � ����� � 1 ���� �.�. �� 1 ����� ��������� ����� �.�. ���������� �� %d", Diff);
                    }
                if (AmountNow < AmountDecember)
                    {
                        Diff = AmountDecember - AmountNow;
                        printf("\nʳ������ ��������� �� ����� ������: %d", AmountNow);
                        printf("\nʳ������ ��������� ������ � ����� � 1 ���� �.�. �� 1 ����� ��������� ����� �.�. ���������� �� %d", Diff);
                    }
                if (AmountNow == AmountDecember)
                    printf("\nʳ������ ��������� �� ��������.");
                break;
            case('e'):
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
            default:
                break;
        }
        return 0;
    }
