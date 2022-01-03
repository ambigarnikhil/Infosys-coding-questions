#include<stdio.h>

/*
#include<stdio.h>
void main()
{
    int a=printf("I will");//first printf will be executed and printf returns count of chars i.e, 6 and we store it in a.
    printf(a+"Never  take any classes for you"); //here a+ means 6+ it will ignore/skip first 6 chars and print remaining part.
}

output: I will take any classes for you.
*/


/*
#include<stdio.h>
void main()
{
    int a=printf("Hello"); //first printf will be executed and printf returns count of chars and we store it in a.
    printf("%d",a);
}
output: Hello5
*/

/*
#include<stdio.h>
void main()
{
    printf(2+"Hello world");
}
//output: llo world
*/


/*
#include<stdio.h>
void main()
{
    printf("Hello world"+2);
}
output: llo world
*/

/*
#include<stdio.h>
void main()
{
    printf(2+"Hello world"+2-1);
}
output: lo world
*/

/*
#include<stdio.h>
void main()
{
    printf(2-"Hello world"+2-1);
}
output: Error, we can't subtract.
*/

/*
#include<stdio.h>
void main()
{
    printf("Hello");
    printf("World"-2); // it will go back to first printf and again prints from -2 location.
}
output:Helloo
*/

/*
#include<stdio.h>
void main()
{
    printf("Hello");
    printf("World"-1);
}
output:Hello
*/

/*
#include<stdio.h>
void main()
{
    printf("Hello");
    printf(-2+"World"); // it will go back to first printf and again prints from -2 location.
}
output:Helloo
*/

/*
#include<stdio.h>
void main()
{
    printf("World"-2);
}
output: nothing will print.
*/

/*
#include<stdio.h>
void main()
{
    printf("Hello");
    int a=5;
    a=10;
    a=20;
    printf("World"-2);
}
output:Helloo
*/

/*
#include<stdio.h>
void main()
{
    if(printf("Hello"))
    {

    }
}
output:Hello
*/

/*
#include<stdio.h>
void main()
{
    if(printf(""))
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
op: IN ELSE
*/

/*
#include<stdio.h>
void main()
{
    float a=3.3;
    if(a==3.3)
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
output:IN ELSE
*/

/*
#include<stdio.h>
void main()
{
    float a=3.3;
    if(a==3.300000) //we are comparing float with double i.e, 4bytes will not be equal to 8 bytes.
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
//output:IN ELSE
*/


/*
void main()
{
    float a=3.3;
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(3.300000));
    printf("%lu\n",sizeof(3.3));

}
//output:4,8,8.
*/

/*
void main()
{
    float a=3.3;
    if(a==(float)3.3)
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
//output:IN IF
*/

/*
void main()
{
    float a=3.3;
    if(a==3.3f)
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
//output:IN IF
*/

/*
void main()
{
    float a=3.3;
    if((double)a==3.3)
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
//output:IN ELSE
*/

/*
void main()
{
    float a=3.5;
    if(a==3.5)
    {
        printf("IN IF");
    }
    else
    {
        printf("IN ELSE");
    }
}
//output:IN IF
only for 0.5,1,1.5.2,2.5 float and double can be compared.
*/


/*
void main()
{
    int a=010;
    printf("%d\n",a);
}
output=8
*/

/*
void main()
{
    int a=015;
    printf("%d\n",a);
}
output=13
*/

/*
void main()
{
    int a=028;
    printf("%d\n",a);
}
// 8 is the invalid octal number
*/

/*
void main()
{
    int a=0266;
    printf("%o\n",a);
}
output=266
in integer format op will be(2*8^2+6*8^1+6*8^0=128+48+6=182)
*/
