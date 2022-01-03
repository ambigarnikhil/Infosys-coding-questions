
/*
#include<stdio.h>
#define f(a,b,c,d) d##c##b##a
void f(n,i,a,m)()
{
    printf("Why it works");
}
*/


/*
#include<stdio.h>
#define f(a,b,c,d) a##b##c##d
void f(m,a,i,n)()
{
    printf("Why it works");
}
*/


/*
#include<stdio.h>
void m##a##i##n()
{
    printf("Why it works");
}

we will get error
##- concatenates string letters, and it works only in macros.
*/


/*
#include<stdio.h>
#define f(a,b) a##b
void main()
{
    printf("%s",f(k,l));
}
output:error..., kl should be a variable holding some string.

*/


/*
#include<stdio.h>
#define f(a,b) a##b
void main()
{
    int kl=20;
    printf("%d",f(k,l));
}
output:20
*/

/*
#include<stdio.h>
#define f(a,b) "a##b"
void main()
{
    printf("%s",f(k,l));
}
output:a##b
*/


/*
#include<stdio.h>
#define f(a,b) a##b
void main()
{
    printf("%s","f(k,l)");
}
output:f(k,l)
*/


/*
#include<stdio.h>
void main()
{
    int a=1;
    while(a>0)
    {
        printf("%d",a);
        a++;
    }

}
//op:1 2 3 4....32767
*/

/*
#include<stdio.h>
void main()
{
    short int a=1;  //we can also use short a=1;
    while(a>0)
    {
        printf("%d\n",a);
        a++;
    }
}
op:1,2,...,32767.
*/

/*
#include<stdio.h>
void main()
{
    short a=1;  //we can also use short a=1;
    while(a>0)
    {
        printf("%d\n",a);
        a++;
    }

}
op:1,2,...,32767.
*/

/*
#include<stdio.h>
void main()
{
    int a=1;  //we can also use short a=1;
    while(a>0)
    {
        printf("%d\n",a);
        a++;
    }
}
//op: as it is signed int values will be 1,2,...,2^31-1.
*/

/*
#include<stdio.h>
void main()
{
    short a=1;  //we can also use short a=1;
    while(a!=0)
    {
        printf("%d\n",a);
        a++;
    }

}
output:1,2,3....32767,-32768,-32767....-1
*/

/*
#include<stdio.h>
void main()
{
    int i;
    printf("%d\n",i);
}
Output: Garbage value.
*/


/*
#include<stdio.h>
void main()
{
    int a=10,b=20;
    printf("%d\t%d\n",a,b);
    {
        int a=50;
        b+=50;
        a+=50;
        printf("%d\t%d\n",a,b);
    }
    printf("%d\t%d\n",a,b);
}
op:
10,20
100,70
10,70.
*/

/*
#include<stdio.h>
void main()
{
    unsigned short a=1;  //we can also use short a=1;
    while(a>=0)
    {
        printf("%d\n",a);
        a++;
    }

}
output=infinite loop
1...65535,0,1,2...65535.
*/

/*Addition without +
#include<stdio.h>
void main()
{
    int a=20,b=10,c;
    c=a-(-b);
    printf("%d\n",c);
}
*/


/*Subtraction without -
#include<stdio.h>
void main()
{
    int a=5,b=10,c=0;
    while(a<b)
    {
        a=a+1;
        c=c+1;
    }
    printf("%d\n",c);
}
*/

/*
#include<stdio.h>
void main()
{
    int a= printf("I will");
    printf(a+"never  take classes to you");
}
op: I will take classes to .(It will give warning and execute.)
*/
