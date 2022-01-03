#include<stdio.h>

/*
void main()
{
    int a=266;
    printf("%i\n",a);
}
output:266
*/

/*
void main()
{
    int a=0xf;
    printf("%i\n",a);
}
output: 15
*/

/*
void main()
{
    int a=0xf;
    printf("%x\n",a);
}
output: f
*/

//Logical operators.

/*
void main()
{
    int a=20,b=0,c;
    c=a&&b;
    printf("%d\n",c);
}
output: 0
*/

/*
void main()
{
    int a=20,b=10,c;
    c=a&&b;
    printf("%d\n",c);
}
output: 1
*/

/*
void main()
{
    int a=0,b=0,c;
    c=++a&&++b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output: 1 1 1.
*/

/*
void main()
{
    int a=10,b;
    b=++a;
    printf("%d\t %d\t",a,b);
}
output: 11 11.
*/

/*
void main()
{
    int a=10,b;
    b=a++;
    printf("%d\t %d\t",a,b);
}
output: 11 10.
*/

/*
void main()
{
    int a=0,b=0,c;
    c=++a&&b++;
    printf("%d\t %d\t %d\t",a,b,c);
}
output: 1 1 0.
*/

/*
void main()
{
    int a=0,b=0,c;
    c=a++&&b++;
    printf("%d\t %d\t %d\t",a,b,c);
}
output: 1 0 0.
*/

/*
void main()
{
    int a=-1,b=99,c;
    c=++a&&++b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output: 0 99 0.
*/

/*
void main()
{
    int a=0,b=10,c;
    c=a||b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output:0 10 1.
*/

/*
void main()
{
    int a=0,b=-99,c;
    c=a||b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output:0 -99 1.
*/

/*
void main()
{
    int a=-1,b=-1,c;
    c=++a||++b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output:0 0 0.
*/

/*
void main()
{
    int a=0,b=0,c;
    c=++a||++b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output:1 0 1.
*/

/*
void main()
{
    int a=0,b=0,c=10;
    c=++a||++b;
    printf("%d\t %d\t %d\t",a,b,c);
}
output:1 0 1.
*/

/*
void main()
{
    int a=8,b=9,c=9,d;
    d=++a||++b&&++c;
    printf("%d\t %d\t %d\t %d\t",a,b,c,d);
}
//output:9 9 9 1. it will become like d=++a||(++b&&++c)
*/

/*
void main()
{
    int a=8,b=9,c=9,d;
    d=++a&&++b&&++c;
    printf("%d\t %d\t %d\t %d\t",a,b,c,d);
}
//output:9 10 10 1.
*/

/*
void main()
{
    int a=8,b=9,c=9,d=5,e;
    e=++a&&++b||++c&&++d;
    printf("%d\t %d\t %d\t %d\t %d\t",a,b,c,d,e);
}
//output:9 10 9 5 1.
*/

void main()
{
    int a=5;
    printf("%d\n",!!a);
}
//output:1
