#include <stdio.h>

int main()
{
    int x=0;
    int y=0;
    float somma=0;
    while (x>=0)
    {
    printf("inserisci un numero\n");
    scanf("%d", &x);
    y=y+1;
    somma=somma+x;
    printf("%f", somma/y);

    }



}