#include<stdio.h>

/*
void main()
{
    int a=5;
    int b=6;
    int c=7;
    int d =8;
    int e= 9;
    int f;
    f = a + b * c &&d || e;
    //first multiplication then addtion then logical and then logical or.
    //it will look like (((a+(b*c))&&d)||e)
    printf("%d\n",f);
}
//output:1
*/

//Bitwise operator

/*
 void main()
 {
     int a=9,b=10,c;
     c=a&b;//a=1001 b=1010
     // 1001
     //&1010
     //= 1000
     printf("%d\n",c);
 }
 //output:8
*/

/*
void main()
 {
     int a=9,b=10,c;
     c=a|b;//a=1001 b=1010
     // 1001
     //|1010
     //=1011
     printf("%d\n",c);
 }
 //output:11
*/

/*
void main()
 {
     int a=9,b=10,c;
     c=a^b;//a=1001 b=1010
     // 1001
     //^1010
     //=0011
     printf("%d\n",c);
 }
 //output:3
*/

/*
void main()
{
    int a=12;
    printf("%d\n",a>>1);
}
//output:6
*/

/*
void main()
{
    int a=12;
    printf("%d\n",a>>2);
}
//output:3
*/


/*
void main()
{
    int a=12;
    printf("%d\n",a>>3);
}
//output:1
*/

/*
void main()
{
    int a=500;
    printf("%d\n",a>>2);
}
//output:125
//a>>n=a/(2^n)
*/

/*
void main()
{
    int a=501;
    printf("%d\n",a>>2);
}
//output:125
*/

/*
void main()
{
    int a=-500;
    printf("%d\n",a>>2);
}
//output:-125
*/

/*
void main()
{
    int a=12;
    printf("%d\n",a<<1);
}
//output:24
*/


/*
void main()
{
    int a=6;
    printf("%d\n",~a);
}
//output:-7
*/

/*
void main()
{
    int a=-12;
    printf("%d\n",a<<1);
}
//output:-24
*/

/*
void main()
{
    int a=5,b=2,c;
    c=a>> b & b;// (a>>b)&b  (5>>2)&2
    printf("%d\n",c);
}
//output: 0
*/

/*
void main()
{
    int a=5,b=2,c=3,d=4,e=5,f;
    f=a&&b&c>>d<<e^d/c%c-b ||a;
    printf("%d\n",f);
}
//f=a&&b&c>>d<<e^(((d/c)%c)-b) ||a;
//output: 1
*/

//Ternary operator.

/*
void main()
{
    int a=10,b=5,c;
    c = a>b ? a : b;
    printf("%d\n",c);
}
//output: 10
*/

/*
void main()
{
    int a=10,b=5,c;
    c = a<b ? a : b;
    printf("%d\n",c);
}
//output: 5
*/

/*
void main()
{
    int a=10,b=5,c;
    a<b ? c=a : c=b;
    printf("%d\n",c);
}
//output: error
//ternanory operator assosiative rule is right to left.
*/

/*
void main()
{
    int a=10,b=5,c;
    a<b ? (c=a) : (c=b);
    printf("%d\n",c);
}
//output: 5
*/
