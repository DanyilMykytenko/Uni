#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    int a, b, c, m;
    printf("������� �������� �: ");
    scanf("%d", &a);
    printf("������� �������� b: ");
    scanf("%d", &b);
    printf("������� �������� c: ");
    scanf("%d", &c);
    if(a >= pow(b,4))
        if(pow(b, 4) <= c/2)
            {
                m = a * b * c;
                printf("%d", m);
                return 0;
            }
    m = -1;
    printf("%d", m);
    return 0;
}
