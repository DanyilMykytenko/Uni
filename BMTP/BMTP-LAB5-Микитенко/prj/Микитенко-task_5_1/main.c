#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        char *locale = setlocale(LC_ALL, "");
        unsigned int AmountDecember, DeregisteredNow, RegisteredNow, BornNow, DiedNow, AmountNow, Diff;
        char display[1];
        printf("Оберіть мову інтерфейсу:\nChoose the language of the display:\n(у/e)\n");
        gets(display);
        while(0 < 1)
        {
            switch(display[0])
            {
                case('y'):
                    printf("Призначення алгоритму - виведення чисельності населення області станом на 1 число поточного місяця та повідомити про зменшення або збільшення кількості мешканців.\n");
                    printf("ПІБ розробника - Микитенко Даниїл Юрійович.\n");
                    printf("Студент Центрального національного технічного університету.\n");
                    printf("Рік розробки - 2020.\n");
                    printf("Введіть загальну чисельність населення області станом на 1 січня ц.р.: ");
                    scanf("%d", &AmountDecember);
                    printf("Введіть кількість громадян, які станом на 1 січня поточного місяця ц.р. вибули: ");
                    scanf("%d", &DeregisteredNow);
                    printf("Введіть кількість громадян, які станом на 1 число поточного місяця ц.р. прибули: ");
                    scanf("%d", &RegisteredNow);
                    printf("Введіть кількість громадян, які станом на 1 число поточного місяця ц.р. народилися: ");
                    scanf("%d", &BornNow);
                    printf("Введіть кількість громадян, які станом на 1 число поточного місяця ц.р. померли: ");
                    scanf("%d", &DiedNow);
                    AmountNow = AmountDecember - DeregisteredNow + RegisteredNow + BornNow - DiedNow;
                    if(AmountNow < 0 || AmountDecember < 0)
                        {
                            printf("Помилка: були неправильно введені дані...");
                            return 0;
                        }
                    if(AmountNow > AmountDecember)
                        {
                            Diff = AmountNow - AmountDecember;
                            printf("\nКількість мешканців на зараз складає: %d", AmountNow);
                            printf("\nКількість мешканців області у період з 1 січня ц.р. до 1 числа поточного місяця ц.р. збільшилось на %d\n", Diff);
                        }
                    if (AmountNow < AmountDecember)
                        {
                            Diff = AmountDecember - AmountNow;
                            printf("\nКількість мешканців на зараз складає: %d", AmountNow);
                            printf("\nКількість мешканців області у період з 1 січня ц.р. до 1 числа поточного місяця ц.р. зменшилась на %d\n", Diff);
                        }
                    if (AmountNow == AmountDecember)
                        printf("\nКількість мешканців не змінилась.\n");
                    printf("\nВи бажаєте завершити виконання програми? (Т/Н)\n");
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
