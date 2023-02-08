#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    printf("inserire tre numeri interi\n");
    scanf("%d %d %d", &a, &b, &c);

    if ( a+b > c && a+c > b && b+c > a ) 
    { 
        printf("puó essere un triangolo\n");
         if ((a==b && b!=c) || (b==c && a!=b) || (c==a && b!=a))
        { 
            printf("isoscele\n");
        }
    else if (a!=b && b!=c && c!=a)
        {
            printf("scaleno\n");
        }
    else if (a==b && b==c)    
       {
         printf("equilatero\n");
       }
    }
    else
    {
        printf("non puó essere un triangolo\n");
    }
    






}