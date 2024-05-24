
#include <stdio.h>
void swap(int a, int b);
int main()
{
	int a , b;
printf("Enter the value of a and b ");
scanf("%d%d",&a,&b);
	swap(a, b);

	

	return 0;
}


void swap(int a, int b) 
{
	int t;

	t = a;
	a = b;
	b = t;

	printf("the swapped value is\na = %d b = %d\n", a, b);
}
