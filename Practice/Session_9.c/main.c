#include<stdio.h>
#include<stdlib.h>

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

/*
my code
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
     int n;
     int m;
     int p,a;
     printf("Enter the number:\n");
     scanf("%d\n");
     for(int i= n-1; i>=1;i--)
     {
         m= prime(i);
         if(m!=0)
         {
             m=i;
             break;
         }
     }
     for(int j= n+1; j<=1000;j++)
     {
         p= prime(j);
         if(p!=0)
         {
             p=j;
             break;
         }
     }
     if(n-m<p-n)
     {
         a=m;
     }
     else
        a=p;
     printf("%d\n",a-n);

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
     int n,i;
     //printf("Enter the number:\n");
     scanf("%d",&n);
     i=1;
     while(1)
     {
         if(prime(n-i)||prime(n+i))
         {
             printf("%d\n",i);
             break;
         }
         i++;
     }
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
     int n,i;
     //printf("Enter the number:\n");
     scanf("%d",&n);
     if(n%2==0)
     {
         i=1;
     }
     if(n%2==1)
     {
         i=2;
     }
     if(n==3)
     {
         printf("%d\n",1);
         exit(1);
     }
     while(1)
     {
         if(prime(n-i)||prime(n+i))
         {
             printf("%d\n",i);
             break;
         }
         i+=2;
     }
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
     int n,i;
     //printf("Enter the number:\n");
     scanf("%d",&n);
     i=n%2+1;
     if(n==3 || n==1)
     {
         printf("%d\n",1);
         exit(1);
     }
     while(1)
     {
         if(prime(n-i)||prime(n+i))
         {
             printf("%d\n",i);
             break;
         }
         i+=2;
     }
 }
*/
//see exit numbers in c.

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
     int n,i;
     //printf("Enter the number:\n");
     scanf("%d",&n);
     i=n%2+1;
     if(n==3 || n==1)
     {
         printf("%d\n",1);
         exit(1);
     }
     while(!(prime(n-i)||prime(n+i)))
     {
         i+=2;
     }
     printf("%d\n",i);
 }
*/

/*
//Twin primes
3,5
5,7
11,13
17,19
// the difference between them is 2.
*/

/*
Given two input numbers, find all the two prime numbers
between these numbers.
Sample input:
    10 20
Sample output:
11,13
17,19

constraints:
1<=a<=10000
1<=b<=10000
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
     int a,b,i;
     scanf("%d %d",&a,&b);
     for(i=a+1;i<=b-3;i++)
     {
         if(prime(i)&&prime(i+2))
         {
             printf("%d,%d\n",i,i+2);
         }
     }

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
     int a,b,i;
     scanf("%d %d",&a,&b);

     for(i=a+a%2+1;i<=b-3;i+=2)
     {
         if(prime(i)&&prime(i+2))
         {
             printf("%d,%d\n",i,i+2);
         }
     }

 }
*/

/*
Given two input numbers(positive),Check if the sum
of all prime numbers inclusive between the two input
numbers is a prime number or not. If it is prime,
print PRIME else print Non prime.

Given an input number . check if the number is prime and
fibonacci number.
If prime print P;
if fibonacci print F;
If prime and fibonacci, print PF
If neither , print NO

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
     int a,b,i;
     int sum=0;
     scanf("%d %d",&a,&b);

     for(i=a+a%2+1;i<=b-1;i=i+2)
     {
         if(prime(i))
         {
             sum=sum+1;
         }
     }
     int m = prime(sum);
     if(m==1)
        printf("Prime\n");
     else
        printf("NoN Prime\n");

 }
*/
