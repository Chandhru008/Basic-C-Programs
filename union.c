#include<stdio.h>
union person
{
    char name [100];
int age;
double sal;
};
int main()
{
union person p;
p.name[100] = "chandhru" ;
printf("name:%s",p.name);
p.age=12;
printf("age:%d",p.age);
p.sal=50000.45;
printf("sal:%lf",p.sal);
}    
