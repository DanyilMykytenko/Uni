#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short ddmm, yy;
    system("chcp 1251 & cls");
    do{
        printf("Введіть число /ДД/, номер місяця /ММ/, рік /РРРР/:\n");
        scanf("%hu", &ddmm);
        ddmm <<= 8;
        scanf("%hu", &yy);
        ddmm ^= yy;
        scanf("%hu", &yy);
        if ( ddmm >> 8 >= 1 && ddmm >> 8 <= 31 && (ddmm & 0xff) >= 1 && (ddmm & 0xff) <= 12)
            switch(ddmm & 0xf){
                case 1:
                    printf(" %02d січня %d року", ddmm >> 8, yy);
                    break;
                case 2:
                    printf(" %02d лютого %d року", ddmm >> 8, yy);
                    break;
                case 3:
                    printf(" %02d березня %d року", ddmm >> 8, yy);
                    break;
                case 4:
                    printf(" %02d квітня %d року", ddmm >> 8, yy);
                    break;
                case 5:
                    printf(" %02d травня %d року", ddmm >> 8, yy);
                    break;
                case 6:
                    printf(" %02d червня %d року", ddmm >> 8, yy);
                    break;
                case 7:
                    printf(" %02d липня %d року", ddmm >> 8, yy);
                    break;
                case 8:
                    printf(" %02d серпня %d року", ddmm >> 8, yy);
                    break;
                case 9:
                    printf(" %02d вересня %d року", ddmm >> 8, yy);
                    break;
                case 10:
                    printf(" %02d жовтня %d року", ddmm >> 8, yy);
                    break;
                case 11:
                    printf(" %02d листопада %d року", ddmm >> 8, yy);
                    break;
                case 12:
                    printf(" %02d грудня %d року", ddmm >> 8, yy);
                    break;
            }
        else puts("\aПомилка дати...");
        printf("\nЗавершити?(Т/Н) \n");
        ddmm = getch();
    }while (ddmm == 'Y' || ddmm == 'y'|| ddmm == 'Н'|| ddmm == 'н');
    return 0;
}
