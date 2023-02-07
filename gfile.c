#include <stdio.h>

int main()
{
    int num;

    printf("inserisci un numero\n");
    scanf("%d", &num);
    if (num%400==0 || num%100!=0)
    {
        printf("bisestile\n");
    }
    else
    {
        printf("non bisestile\n");
    }

}