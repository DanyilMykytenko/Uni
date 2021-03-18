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
    printf("\nУ даннiй програмi користувач вводить речення,яке закiнчується на '...', '!', '?'.\
            \nА програма повинна вивести кiлькiсть літер Ж у введеному реченi,\nякщо цих символiв немає, то вивести відповідне повідомлення.\n");
    for(int i = 0; i < 80; i++)
    {
        printf("-");
    }

    printf("\nВерсiя 1.0\nРозробник: Микитенко Даниїл Юрійович.\nЦНТУ, 2021 рiк.\n");

    int arr[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 15; i++)
    {
        printf("Введіть число %d: ", i+1);
        scanf("%d", &arr[i]);
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
    printf("Кількість елементів задовільняючих умову - %d", amount);
}
