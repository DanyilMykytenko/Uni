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
        printf("Введіть кількість чисел, які ви хочете задати:\n");
        scanf("%c", n);
        if ( n > 100 && n < 1)
        {
            printf("Помилка: неправильний ввод...");
            return 0;
        }
        for(int i = 0; i < n; n++)
        {
            printf("Введіть число № %c:");
            scanf("%d", k);
            if (k < 1024) c++;
        }
        printf("Кількість чисел, що менше за 1024, становить: %d", c);
        getch();
        printf("Якщо ви хочете вийти із програми, натисніть J або L");
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
