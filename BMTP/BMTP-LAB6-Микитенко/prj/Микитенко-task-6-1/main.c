#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    char e;
    short n = 0, k = 0, c = 0;
    printf("Призначення алгоритму - підрахувати кількість чисел, що менші за 1024\n");
    printf("Розробник - Микитенко Даниїл Юрійович, електрона скринька: freezeee682@gmail.com\n");
    printf("Версія розробки - 1.0 2020 року\n\n");
    for(;;)
    {
        printf("Введіть кількість чисел, які ви хочете задати: ");
        scanf("%hu", &n);
        if ( n > 100 || n < 1)
        {
            printf("\nПомилка: неправильний ввод...\n\n");
            return 0;
        }
        for(int i = 0; i < n; i++)
        {
            printf("Введіть число № %d: ", i+1);
            scanf("%hu", &k);
            if (k < 1024)
                c++;
        }
        printf("\nКількість чисел, що менше за 1024, становить: %d", c);
        printf("\nЯкщо ви хочете вийти із програми, натисніть J або L\n");
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
