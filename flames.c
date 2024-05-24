#include<stdio.h>
#include <string.h>
#define ANSI_RESET_ALL          "\x1b[0m"
#define ANSI_COLOR_BLUE         "\x1b[34m"    
#define ANSI_COLOR_RED          "\x1b[31m" 
#define ANSI_COLOR_MAGENTA      "\x1b[35m"    
int to_check_commom_char(char *name1,char*name2,int a,int b);
void check(int add);
char f[]="flames";

int main()
{
    int z,a=0,b=0;
    char name1[100];
    char name2[100];
     
printf(ANSI_COLOR_BLUE"\n"ANSI_RESET_ALL);

printf(ANSI_COLOR_BLUE"---->FLAMES<-----\n\n\n\n\n\n" ANSI_RESET_ALL);



     

    
     printf("=> " ANSI_COLOR_MAGENTA "ENTER YOUR NAME:" ANSI_RESET_ALL "\n");
    scanf("%s",name1);

     printf("=> " ANSI_COLOR_MAGENTA "ENTER YOUR PARTNER'S NAME:" ANSI_RESET_ALL "\n");
      scanf("%s",name2);

    
        a = strlen(name1);
        b = strlen(name2);
        a=a+b;
 int add=to_check_commom_char(name1,name2,a,b);
 check(add);
 printf("\n\n\n\n\n");
 if(f[0]=='e')
 {
printf("-----ENEMY-----\n\n\n");
 }


else if (f[0]=='f')
{

printf("-----FRIENDS-----\n\n\n\n\n");
}

else if (f[0]=='m')
{

printf("-----MARRIAGE-----\n\n\n\n");

}
else if (f[0]=='l')
{

printf("-----LOVE-----\n\n\n\n\n");
}

else if (f[0]=='a')
{

printf("-----AFFECTION-----\n\n\n\n");
}
else
printf("-----SISTER-----\n\n\n");

 

      



}

int to_check_commom_char(char *name1,char*name2,int a,int b){
    int z=0;
    int c;
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            c=name1[i];
            if(c==name2[j]){
                name1[i]=-1;
                name2[j]=-1;
                
                z=z+2;
                
            }
        }
    }
    
    int add=0;
    add = a-z;
    return add;
}

void check(int add){
    int l =1, fc=5,k,i;
    for (i=0; ;i++)
    {
            if (l==(add))
            {
                for( k=i;f[k]!='\0';k++)
                {
                    f[k]=f[k+1];

                }
                f[k+1]='\0';
                fc=fc-1;
                i=i-1;
                l=0;

            }
            if (i==fc)
            {
                i=-1;

            }
            if(fc==0)
            {
                break;
            }
            l++;
    }
}
