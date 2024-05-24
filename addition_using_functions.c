#include<stdio.h> 
int add(int x,int y );
int main()
{
    int a,b,c;
    printf("enter the value of A and B:");
    scanf("%d%d",&a,&b);
    c = add(a,b);
    printf("the value of c is %d",c);


}
int add(int x,int y)
{
    printf("the value of tha sum is %d",x+y);
return x+y;
}
