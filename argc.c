// Command line argument
// argc stands for Argument Count.
// argv stands for Argument Vector.

#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("The number of arguments passed: %d\n", argc);
    
    for(int i = 0; i < argc; i ++){
        printf("[*] argc %d - %s\n", i, argv[i]);
    }

}

/* 
~ ./a.out Hii my name is Chandhru
The number of arguments passed: 6
[*] argc 0 - ./a.out
[*] argc 1 - Hii
[*] argc 2 - my
[*] argc 3 - name
[*] argc 4 - is
[*] argc 5 - Chandhru
*/
 
/* 
~ ./a.out "Hii my name is Chandhru"
The number of arguments passed: 2
[*] argc 0 - ./a.out
[*] argc 1 - Hii my name is Chandhru
/*
