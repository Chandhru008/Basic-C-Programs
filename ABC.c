/*
A
AB
ABC
*/

#include<stdio.h>
int main()
{
    int n,i,j,k='A';
    printf("enter no of rows to be printed");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
        for(j=1;j<=i;j++)
        {
            printf("%c",k=64+j);
            
        }

         
    printf("\n");
}}
