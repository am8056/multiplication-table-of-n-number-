/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/
    // PROGRAM TO PRINT TABLE OF N NUMBER
 #include <stdio.h>  
int main()  
{  
    int num, i; // declare a variable  
    printf (" Enter a number to generate the table in C: ");  
    scanf (" %d", &num); // take a positive number from the user  
      
    printf ("\n Table of %d", num);  
    // use for loop to iterate the number from 1 to 10  
    for ( i = 1; i <= 10; i++)  
    {  
        printf ("\n %d * %d = %d", num, i, (num*i));  
    }  
    return 0;  
}  
