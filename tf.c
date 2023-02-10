#include <stdio.h>

int main()
{
    int i=0;
    int array[3];

    printf("inserisci tre numeri\n");
    
    while(i<=2)
    {   
        scanf("%d", &array[i]);
        
        i=i+1;
    }
    i=0;
    int temporanea;
    while (i<=2)
    {
        temporanea=array[0];
        array[0]=array[2];
        array[2]=temporanea;

        printf("%d\n", array[i]);
        i=i+1;
    }
    

}