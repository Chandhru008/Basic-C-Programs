#include<stdio.h>
int main()
{
    int n,c=1;
    printf("enter no of rows:");
    scanf("%d",&n);
for (int i=0;i<n;i++)
{
    for(int s=0;s<n-i;s++)
    printf("_"); 
    for(int j=0;j<=i;j++)
    {
        if(i==0||j==0)
         c=1;
        else
        c=(c*(i-j+1))/j;
     printf("%d ",c);
        
    }
    printf("\n");

}
return 0;
}
