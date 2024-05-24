#include<stdio.h>
int main()
{
  int a[10],i,n,multiple=1;
  printf("enter number less that 10");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    
        printf("the value to  stored in array");
        scanf("%d",&a[i]);
        multiple=multiple*a[i];    
  }
  printf("the multipled value is %d",multiple);
  {
    printf("\n");
  return 0;
  }
}
