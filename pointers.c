#include<stdio.h>
int main(){
int i =10;
int *p=&i;
printf("%d\n",p);
printf("%ld\n",p);
printf("%p\n",&p);
printf("%p\n",&i);
printf("%d",*p);
printf("\n");

}
