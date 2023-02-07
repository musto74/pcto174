#include <stdio.h>

int main()
{
    float temp;
    

    printf("inserire una temperatura in celsius\n");
    scanf("%f", &temp);
    if (temp<-273.15)
    {
        printf("errore\n");
    }
   else 
    {
        float kelvin = temp+ 273.15;
    printf("in kelvin: %f\n", kelvin);
    float far = temp * 9/5 + 32;
    printf("in fahreneit: %f\n", far);}
    
  

}