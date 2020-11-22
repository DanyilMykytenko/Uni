#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL,"");
    printf("Розробник - Микитенко Даниїл Юрiйович, студент ЦНТУ. 2020 рiк.\nПризначення застосунку - визначити об'єм використанного газу, за який слiд сплатити, та суму до сплати.\n\n");
    double gasval = 4.7193;
    double last, cur, vol;
    printf("Введiть показники лiчильника за минулий мiсяць:\n");
    scanf("%lf", &last);
    if(last<0)
    {
        printf("Показники лiчильника не можуть бути менше нуля");
        return 0;
    }
    printf("Введiть поточнi показники лiчильника:\n");
    scanf("%lf", &cur);
    if(cur<0)
    {
        printf("Показники лiчильника не можуть бути менше нуля");
        return 0;
    }
    vol = (cur-last)*gasval;
    double dig = cur-last;
    if(last==cur)
    {
        printf("До сплати немає нiчого\n\n");
        printf("Press Enter for exit\n");
        system("pause");
        return 0;
    }
    if(vol<0) printf("Помилка: поточне число не може бути меншим за минуле\n\n");
    else printf("Неоплачено %2.lf кубiчних метри. До сплати: %2.lf грн\n\n", dig, vol);
    printf("Для завершення натисніть Enter\n");
    system("pause");
    return 0;
}
