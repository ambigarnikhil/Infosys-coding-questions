#include <stdio.h>

//const int a=3; those can't be changed throughout the program

/*
void main()
{
    static int a=10;
    if(a>=8)
    {
        printf("%d\n",a--);
        main();
    }
    printf("%d\n",a++);
}
// Output: 10 9 8 7 8 9 10
*/

/*
void main()
{
    static int a=10;
    if(a>=8)
    {
        printf("%d\n",a--);
        main();
    }
    else
    {
        printf("%d\n",a++);
    }

}
// Output: 10 9 8 7
*/

/*
void main()
{
    static int a;
    a++;
    if(a<=6)
    {
        printf("%d\n",a++);
        main();
    }
    printf("%d\n",a-2);
}
// Output: 1 3 5 5 5 5 5.
*/

/*
//extern storage class:
(whenever you're compiling multiple source files together).

Declaring a variable:"int a" specifies that we need a variable with name "a" before compile.
Defining a variable: when your program executes, your variable is given memory.

extern int a;
 */

 //Numeric programs:

 // prime number

 /*
 int prime(int n)// Return 1 if number is prime or o if not prime.
 {
     for(int i=2;i<=n-1;i++)
     {
         if(n%i==0)
            return 0;
     }
     return 1;

 }
 void main()
 {
     if(prime(15)==1)  // we can also use if(prime(29))
        printf("PRIME\n");
     else
        printf("NOT PRIME(COMPOSITE)\n");

 }
 */

 /*
int prime(int n)// Return 1 if number is prime or o if not prime.
 {
     for(int i=2;i<=n/2;i++)
     {
         if(n%i==0)
            return 0;
     }
     return 1;

 }
 void main()
 {
     if(prime(1000)==1)  // we can also use if(prime(29))
        printf("PRIME\n");
     else
        printf("NOT PRIME(COMPOSITE)\n");

 }
*/

/*
#include<math.h>
int prime(int n)// Return 1 if number is prime or o if not prime.
 {
     for(int i=2;i<=sqrt(n );i++)
     {
         if(n%i==0)
            return 0;
     }
     return 1;

 }
 void main()
 {
     if(prime(1000)==1)  // we can also use if(prime(29))
        printf("PRIME\n");
     else
        printf("NOT PRIME(COMPOSITE)\n");

 }
 */

 /*
#include<math.h>
int prime(int n)// Return 1 if number is prime or o if not prime.
 {
     int m=sqrt(n);
     for(int i=2;i<=m;i++)
     {
         if(n%i==0)
            return 0;
     }
     return 1;

 }
 void main()
 {
     if(prime(29)==1)  // we can also use if(prime(29))
        printf("PRIME\n");
     else
        printf("NOT PRIME(COMPOSITE)\n");

 }
*/

/*
Ram is found of prime numbers.He loves to play with any
positive integer and find a lucky number for that
positive number. The way he finds lucky number for prime
number is by finding closest prime number to the given
integer. The difference between the given number and
it's closest prime number is lucky number. Help Ram
write a program to find the same.

Sample Input: 22
Sample Output: 1

Input: an integer n
Output: lucky number for the input integer n

Constraints: 1<=n<=1000000
*/

int prime(int n)// Return 1 if number is prime or o if not prime.
 {
     int a,b,c,d,e;
     for(int i=n-1;i>=1;i--)
     {
         for(int j=2;j<=n-2;j++)
         {
             if(i%j==0)
            {
                a=i;
            }
         }
         printf("a:%d\n",a);
         break;
     }
     for(int i=n+1;i<=1000;i++)
     {
         for(int j=2;j<=n-2;j++)
         {
             if(i%j!=0)
            {
                b=i;
            }
         }
         printf("b:%d\n",b);
         break;
     }
     c=n-a;
     d=b-n;
     if(c>d)
     {
         e=b;
     }
     else
     {
         e=a;
     }
     printf("final:%d\n",n-e);
 }
 void main()
 {
     prime(5);

 }
