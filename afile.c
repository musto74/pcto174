#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("inserisci due numeri interi\n");
    scanf("%d %d", &a , &b);
    
    if (a>b)
    {printf("maggiore\n");}
    else if (a==b)
    {printf("uguale\n");}
    else if (a<b)
    {printf("minore\n");}


}