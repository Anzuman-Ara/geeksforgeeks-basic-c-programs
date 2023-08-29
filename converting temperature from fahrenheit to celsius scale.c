#include<stdio.h>

int main()
 {
   float celsius, fahrenheit;

   printf("Enter the temperature in Fahrenheit scale :");

   scanf("%f",&fahrenheit);

   celsius=5*(fahrenheit-32)/9;

   printf("The temperature in Celsius scale is : %.2f",celsius);
 }

