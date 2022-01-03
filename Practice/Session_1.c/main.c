how to compile?
g++ -o aftercompilationfilename file_to_compile

how to run?
./aftercompilationfilename


/*#include<stdio.h>
#define f(x) x*x
void main()
{
    int a;
    a=25/f(5);
    printf("%d\n",a);
}
//op:25
*/


/*#include<stdio.h>
void main()
{
    char ch;
    printf("%lu\n",sizeof(ch));
}
//op:1
*/


/*
#include<stdio.h>
void main()
{
    double a;
    printf("%lu\n",sizeof(a));
}
//op:8
*/

/*
#include<stdio.h>
#define pain main
void pain()
{
    char ch;
    printf("%lu\n",sizeof(ch));
}
//op:1
*/

/*
#include<stdio.h>
void main()
{
    char ch='a';
    printf("%i\n",ch);
}
//op:97
*/


/*
#include<stdio.h>
void main()
{
    char ch=97;
    printf("%c\n",ch);
}
//op:a
*/

/*
#include<stdio.h>
void main()
{
    char a=30,b=4,c=10,d;
    d=a*b-c;
    printf("%d\n",d);
}
//op:110
*/


/*
#include<stdio.h>
void main()
{
    char a=30,b=4,c=10,d;
    d=a*b+c;
    printf("%d\n",d);
}

output will be -126
*/

