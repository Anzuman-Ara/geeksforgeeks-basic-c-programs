#include<stdio.h>
main(){

    float length,width;


     //asking the user to provide the length and width of the rectangle
     printf("Enter the length and width of the rectangle :");

    //taking the length and width of the rectangle as input from the user
      scanf("%f%f",&length,&width);


    //providing the user with the calculated area of the rectangle
     printf("\nThe Area of the rectangle is : %.2f",length*width);

     //providing the user with the calculated perimeter of the rectangle
     printf("\nThe Perimeter of the rectangle is : %.2f",2*(length+width));



    }
