#include<stdio.h>
main(){

    float principal, time, interest_rate, simple_interest;


     //asking the user to provide the required information for calculating simple interest
     printf("Enter the principal amount, time and interest rate of your bank account :");

    //taking the information for calculating the simple interest as input from the user
      scanf("%f%f%f",&principal,&time,&interest_rate);

      simple_interest = (principal*time*interest_rate)/100;


    //providing the user with the calculated simple interest as output
     printf("\nThe simple interest of your bank account is : %.3f",simple_interest);


    }
