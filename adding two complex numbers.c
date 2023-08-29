#include<stdio.h>
main(){

   int a_real, a_imaginary, b_real, b_imaginary, addition_real, addition_imaginary;


//asking the user to input the values of real and the imaginary parts of the first complex number respectively
     printf("Enter the real and the imaginary parts of the first complex number respectively :");

    //inputting the values of real and the imaginary parts of the first complex number respectively from the user
      scanf("%d%d",&a_real,&a_imaginary);

      //showing the first complex number
     printf("\nThe first entered complex number is : %d+i%d",a_real,a_imaginary);



//asking the user to input the values of real and the imaginary parts of the second complex number respectively
     printf("\n\nNow enter the real and the imaginary parts of the second complex number respectively :");

    //inputting the values of real and the imaginary parts of the second complex number respectively from the user
      scanf("%d%d",&b_real,&b_imaginary);

      //showing the second complex number
     printf("\nThe second entered complex number is : %d+i%d",b_real,b_imaginary);


      addition_real=a_real+b_real;
      addition_imaginary=a_imaginary+b_imaginary;


    //showing the addition of these two complex numbers
     printf("\n\n\nSo the addition of these two complex numbers is : %d+i%d",addition_real,addition_imaginary);

    }


