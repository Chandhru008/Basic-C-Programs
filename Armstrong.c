#include<stdio.h>
int armstrong (int num);   //function defination

int armstrong (int num)       //function declaration
{    
    int result,sum=0,temp,rem;
    num=temp;            //temporarily storing 
    while (temp != 0)
    {
        rem=temp/10;
        result=sum+rem*rem*rem;  
        temp=temp/10;
    }
    if (result==num)
   printf("no is armstrong\n");
else
printf("no is not an armstrong\n");


}
int main()
{
    int num;
printf("enter a no to be searched:");
scanf("%d",&num);
armstrong(num);        //function calling

}
