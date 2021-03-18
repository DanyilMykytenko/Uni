#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <ctype.h>
#include <io.h>
#include <fcntl.h>

wchar_t str[100];
int amount = 0;

void localisation ()
{
    system("chcp 866");
    _setmode(_fileno(stdout),_O_U16TEXT);
    _setmode(_fileno(stdin),_O_U16TEXT);
}

void lettersCounter()
{
    for(int i = 0; i < wcslen(str); i++)
    {
        if(str[i] == L'ж' || str[i] == 'j' )
        {
            amount++;
        }
    }
}

void output()
{
    wprintf(L"\nКiлькiсть літер Ж у реченi - ");
    wprintf(L"%d\n", amount);
}

void emptyOutput ()
{
    wprintf(L"\nРечення не містить зазначенних літер.\n");
}

int main()
{
    localisation();
    for(int i = 0; i < 80; i++)
    {
        wprintf(L"▄");
    }
    wprintf(L"\nУ даннiй програмi користувач вводить речення,яке закiнчується на '...', '!', '?'.\
            \nА програма повинна вивести кiлькiсть літер Ж у введеному реченi,\nякщо цих символiв немає, то вивести відповідне повідомлення.\n");
    for(int i = 0; i < 80; i++)
    {
        wprintf(L"▄");
    }

    wprintf(L"\nВерсiя 1.0\nРозробник: Микитенко Даниїл Юрійович.\nЦНТУ, 2021 рiк.\n");
    wprintf(L"\nУведiть речення:");
    fgetws ( str, 100, stdin );
    lettersCounter();
    if(amount == 0)
    {
        emptyOutput();
        return 0;
    }
    output();
}
