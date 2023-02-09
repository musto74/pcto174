#include <stdio.h>

int main()
{
    int x;
    int fat=1;

    printf("inserisci un numero\n");
    scanf("%d", &x);
    while (x>0)
    {
       fat=fat*x;
       x=x-1;
    }
printf("fattoriale:%d\n", fat);

}