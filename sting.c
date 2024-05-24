#include<stdio.h>
#include<string.h>
int main()
{
    char s='s';
    char siva[]="Siva Shibu";
    char siva_one[10]="siva shibu";
    char siva_other[11]={'S','i','v','a',' ','S','h','i','b','u','\0'};
    char siva_another[]={'S','i','v','a',' ','S','h','i','b','u','\0'};
    char *ptr = &siva_another[0];

            for(int i=0;i<sizeof(siva);i++)
        {
            printf("siva[%d]='%c'::%d stored in %p\n",i,siva[i],siva_another[i],&siva[i]);
        }
        printf("---------------------------------------------------\n");
             for(int i=0;i<sizeof(siva_one);i++)
        {
            printf("siva_one[%d]='%c'::%d stored in %p\n",i,siva_one[i],siva_another[i],&siva_one[i]);
        }
    printf("---------------------------------------------------\n");
             for(int i=0;i<sizeof(siva_another);i++)
        {
            printf("siva_another[%d]='%c'::%d stored in %p\n",i,siva_another[i],siva_another[i],&siva_another[i]);
        }
       printf("siva: %s\n",siva);
       printf("siva_one: %s\n",siva_one);
       printf("siva_another: %s\n",siva_another);
       printf("reading address via\n");
       printf("----------------------------------\n");

       printf("the value of ptr %p\n",ptr);

       for(int z=0;z<(sizeof(siva_another)+sizeof(siva_other)+sizeof(siva_one));z++)
    {
        printf("*ptr= %c;ptr= %p\n",*ptr,ptr);
        ptr++;
    }

    
}
