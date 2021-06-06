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
    printf("\nУ даннiй програмi користувач вводить 15 чисел.\
            \nА програма повинна вивести кiлькiсть чисел, не рівних 0, які більші за перший елемент массиву та менше за останній.\n");
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
        if(arr[i] == 0)
        {
            printf("Неправильні вхідні дані.");
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
    printf("\nКількість елементів задовільняючих умову - %d", amount);
}
