#include<stdio.h>

//Pointers:
//Variable which store address of other variable.

/*
void main()
{
    int a=10;
    int p=&a;
    printf("%p\n",p); //%p refers to printing of address in hexa decimal.
}
*/

/*
void main()
{
    int a=10;
    int p=&a;
    printf("%d\n",p); //%d refers to printing of address in decimal.
}
*/

/*
void main()
{
    int a=10;
    int p=&a;
    printf("%p\n%p\n",p,&a); //%d refers to printing of address in decimal.
}
//op: actually the output should be different bcoz address
will be 64 bit which is 8 bytes long, we are storing 8 bytes in 4 bytes int.
*/

/*
void main()
{
    int a=10;
    int *p=&a; // using * before variable name it ensures that size of the pointer is large enough that you can store the entire variable address
    printf("%p\n%p\n",p,&a); //%d refers to printing of address in decimal.
}
//op:addresses printed will be same.
*/

/*
&-->de-referencing operator(address of)
*--> referencing operator(value within the address)
NOTE: * and & always work from right to left
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",*p);
}
//op:10
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",*a);
}
//op:error: invalid type argument of unary '*' (have 'int')|
// a is variable it should be a pointer.
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",*&a);
}
//op:10
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",&*a);
}
//op:Error
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",* & * & * & * & * p);
}
//op:10
//unary(single operand) operators execute from right to left.
*/

//There are two reasons to use * in pointers:
//1.it gives sufficient bytes/size to store the address.
//2.you can reference it(go to the address and see what the value is.)

/*
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("%d\n",**q);
}
//op:10
*/

/*
void main()
{
    int a=10;
    int **p=&a;
    //int **q=&p;
    printf("%d\n",**p);
}
//op: incompatible pointer type
//10 is value, it is not a address
Segmentation error - when we want to access some thing from memory segment which is not present.
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("%d\n",* * & * * & q);
}
//op:10
*/

/*
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("%d\n",* * && * * q);
}
//op:Error
// right & already gave us address of 10 but we are asking address of address
*/

/*
Pointers with functions
1:How to send variables from main to other functions:
    a-> call by value

/*
void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void main()
{
    int a=10,b=20;
    swap(a,b);
    printf("%d\t%d\t",a,b);
}
//op:10 20
*/

//b-> call by reference/address

/*
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d\t%d\t",a,b);
}
//op:20 10
*/

//2: How to send variables from other functions to main:

/*
int fun()
{
    int a=50;
    return a;
}
void main()
{
    int result=fun();
    printf("%d\n",result);
}
*/

/*
int* fun()//whenever you return address, your return type should be pointer
{
    int a=50;
    return &a;
}
void main()
{
    int *result=fun();
    printf("%d\n",*result);
}
//output:error
//NOTE: you cannot return address of a local variable.
*/

/*
int* fun()//whenever you return address, your return type should be pointer
{
    static int a=50;
    return &a;
}
void main()
{
    int *result=fun();
    printf("%d\n",*result);
}
//output:50
*/

/*
void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d\t%d\t",a,b);
}
void main()
{
    int a=10,b=20;
    swap(a,b);
}
//op:20 10
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",a[0]);
}
//op:10
*/

/*
void main()
{
    int array[5]={10,20,30,40,50};
    printf("%p\n%p\n",array,array[0]);
}
//op: Same addresses are printed.
//array name holds the address of first element.
//Every array is a pointer.
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",*a);
}
//op:10
*/
