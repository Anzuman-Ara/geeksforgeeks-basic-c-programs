#include<stdio.h>
main(){

    float input_1,input_2,temporary;
     //asking the user to provide any two numbers
     printf("Enter any two numbers you want to swap:");

    //taking the two numbers as input from the user
      scanf("%f%f",&input_1,&input_2);

    //showing the input numbers before swapping
     printf("\nThe first number BEFORE swapping is:%f",input_1);
     printf("\nThe second number BEFORE swapping is:%f",input_2);

     //storing the value of variable 'input_1' into variable 'temporary'
      temporary=input_1;
      //storing the value of variable 'input_2' into variable 'input_1'
      input_1=input_2;
      //storing the value of variable 'temporary' into variable 'input_2'
      input_2=temporary;

    //showing the input numbers after swapping
     printf("\n\n\nThe first number AFTER swapping is:%f",input_1);
     printf("\nThe second number AFTER swapping is:%f",input_2);

    }


