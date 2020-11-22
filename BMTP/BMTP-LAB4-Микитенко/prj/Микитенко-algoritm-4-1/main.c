#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    printf("Розробник - Микитенко Даниїл Юрiйович, студент ЦНТУ. 2020 рiк.\nПризначення застосунку - провести алгоритмічні обчислювання й вивести результат у консоль.\n\n");
    float y,z,sms,KnZ;
    printf("Введіть значення y\n");
    scanf("%f", &y);
    printf("Введіть значення z\n");
    scanf ("%f",&z);
    sms = y+z/5;
    KnZ = y*z-sms;
    y = z+sms;
    KnZ = KnZ*y;
    printf("%2.f, %2.f", sms, KnZ);
    printf("\nPress Enter to exit\n");
    system("pause");
}
