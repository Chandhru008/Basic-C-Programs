#include<stdio.h>


void to_upper_case(char *string);

int main()
{
    char a[100];
    printf("Enter a string:");
    scanf("%s",a);
    printf("The value is  %s\n",a);
    to_upper_case(a);
    
}
void to_upper_case(char *string)
{
    printf("The string receivd is:%s",string);

}
