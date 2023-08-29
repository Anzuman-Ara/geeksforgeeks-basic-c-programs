#include<stdio.h>
#include<math.h>
main(){

    float principal, time, interest_rate, total_amount, compound_interest;


     //asking the user to provide the required information for calculating simple interest
     printf("Enter the principal amount, time and interest rate of your bank account :");

    //taking the information for calculating the compound interest as input from the user
      scanf("%f%f%f",&principal,&time,&interest_rate);

      total_amount = principal*(pow((1+interest_rate/100),time));
      compound_interest = total_amount-principal;


    //providing the user with the calculated compound interest as output
     printf("\nThe compound interest of your bank account is : %.3f",compound_interest);


    }

