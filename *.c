/*
To Display -
*
**
***
****
*****
*/


#include<stdio.h>

int main()
{
    int i,j,rows;           //declaration of variables i,j and rows
    printf("enter no of rows"); 
    scanf("%d",&rows);         //takes input from the user.Number of rows to be printed
    for (i=1;i<=rows;i++) // for loop for number of rows
    {
    for(j=1;j<=i;j++) {    //for loop
        printf("*");      //prints *
            } 
    printf("\n");   //new line
    }
return 0;
}
