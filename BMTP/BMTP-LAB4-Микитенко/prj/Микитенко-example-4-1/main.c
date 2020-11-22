#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    float a;
    char *locale = setlocale(LC_ALL, "");
    printf("Введiть довжину гранi куба:\n");
    scanf("%f", &a);
    printf("Об'єм куба: %0.2f м.", a*a*a);
    puts("\n\nДля завершення нажмiть Enter...");
    getch();
    return 0;
}
