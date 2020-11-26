    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main()
    {
        char *locale = setlocale(LC_ALL, "");
        int AmountDecember, DeregisteredNow, RegisteredNow, BornNow, DiedNow, AmountNow, Diff;
        char display[11];
        printf("ќбер≥ть мову ≥нтерфейсу:\nChoose the language of the display:\n(у/e)\n");
        gets(display);
        switch(display[0])
        {
            case('y'):
                printf("¬вед≥ть загальну чисельн≥сть населенн€ област≥ станом на 1 с≥чн€ ц.р.: ");
                scanf("%d", &AmountDecember);
                printf("¬вед≥ть к≥льк≥сть громад€н, €к≥ станом на 1 с≥чн€ поточного м≥с€ц€ ц.р. вибули: ");
                scanf("%d", &DeregisteredNow);
                printf("¬вед≥ть к≥льк≥сть громад€н, €к≥ станом на 1 число поточного м≥с€ц€ ц.р. прибули: ");
                scanf("%d", &RegisteredNow);
                printf("¬вед≥ть к≥льк≥сть громад€н, €к≥ станом на 1 число поточного м≥с€ц€ ц.р. народилис€: ");
                scanf("%d", &BornNow);
                printf("¬вед≥ть к≥льк≥сть громад€н, €к≥ станом на 1 число поточного м≥с€ц€ ц.р. померли: ");
                scanf("%d", &DiedNow);
                AmountNow = AmountDecember - DeregisteredNow + RegisteredNow + BornNow - DiedNow;
                if(AmountNow < 0 || AmountDecember < 0)
                    {
                        printf("ѕомилка: були неправильно введен≥ дан≥...");
                        return 0;
                    }
                if(AmountNow > AmountDecember)
                    {
                        Diff = AmountNow - AmountDecember;
                        printf("\n ≥льк≥сть мешканц≥в на зараз складаЇ: %d", AmountNow);
                        printf("\n ≥льк≥сть мешканц≥в област≥ у пер≥од з 1 с≥чн€ ц.р. до 1 числа поточного м≥с€ц€ ц.р. зб≥льшилось на %d", Diff);
                    }
                if (AmountNow < AmountDecember)
                    {
                        Diff = AmountDecember - AmountNow;
                        printf("\n ≥льк≥сть мешканц≥в на зараз складаЇ: %d", AmountNow);
                        printf("\n ≥льк≥сть мешканц≥в област≥ у пер≥од з 1 с≥чн€ ц.р. до 1 числа поточного м≥с€ц€ ц.р. зменшилась на %d", Diff);
                    }
                if (AmountNow == AmountDecember)
                    printf("\n ≥льк≥сть мешканц≥в не зм≥нилась.");
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
