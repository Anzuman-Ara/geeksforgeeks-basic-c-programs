#include<stdio.h>
main(){

    int integer;
    float floating_point;
    char character;
    double doubles;
    int input;

     //asking the user to provide the serial number of any data type out of ineteger, floating_point, character and doubles
     printf("Input the serial number of any data type you would like to know the size of from the list shown below:\n");
     printf("1. Integers,\n");
     printf("2. Floating point numbers,\n");
     printf("3. Characters,\n");
     printf("4. Doubles,\n");
     printf("5. All of the above.\n\n");

     printf("Your input is: ");


    //taking the name of the data type as input from the user
      scanf("%d",&input);


      switch(input){

      case 1:
        printf(" And according to your input....\n\n");
        printf(" The size of the integer data type is: %d",sizeof(integer)) ;
        break;

      case 2:
        printf(" And according to your input....\n\n");
        printf(" The size of the floating point data type is: %d",sizeof(floating_point)) ;
        break;

      case 3:
        printf(" And according to your input....\n\n");
        printf(" The size of the character data type is: %d",sizeof(character)) ;
        break;

      case 4:
        printf(" And according to your input....\n\n");
        printf(" The size of the double data type is: %d",sizeof(doubles)) ;
        break;

      case 5:
        printf(" And according to your input....\n\n");
        printf(" The size of the integer data type is: %d\n",sizeof(integer)) ;
        printf(" The size of the floating point data type is: %d\n",sizeof(floating_point)) ;
        printf(" The size of the character data type is: %d\n",sizeof(character)) ;
        printf(" The size of the double data type is: %d",sizeof(doubles)) ;
        break;


      default:
        printf("\n Please only enter one of the serial numbers enlisted above.\n") ;
        break;


      }


    }
