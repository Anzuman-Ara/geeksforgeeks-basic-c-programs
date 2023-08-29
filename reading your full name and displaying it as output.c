#include<stdio.h>
void main(){

    char fullname[120];
     //asking the user to provide their full name
     printf("Enter your full name  :");

    //taking the users name as input, while using underscores in-place of spaces
     fgets(fullname,sizeof(fullname),stdin);

   //output function for printing the users full name
     printf("Thanks for running this code %s :-)",fullname);


}

