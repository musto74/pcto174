#include <stdio.h>

int main()
{
    int a;

    printf("inserisci un anno\n");
    scanf("%d", &a);
    if (a==1969)
    {
        printf("sei nato l'anno dell'atterraggio sulla luna\n");
    }
    else if (a>1969)
    {
        int sott= a-1969;
        printf("sei nato %d anni dopo il primo atterraggio sulla luna\n ", sott);
    }
    else if (a<1969)
    {
        int sot=1969-a;
        printf("sei nato %d anni prima del primo atterraggio sulla luna\n", sot);
    }

}