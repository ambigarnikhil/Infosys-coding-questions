#include<stdio.h>

//Comma operator

/*
void main()
{
    int a=1,2,3,4,5;
    printf("%d\n",a);
}
output:Error
*/

/*
void main()
{
    int a,b,c,d,e=1,2,3,4,5;   //we can't do it in c.
    printf("%d\n",a);
}
output:Error
*/

/*
void main()
{
    int a=(1,2,3,4,5); //it will return last value i.e, 5 will be stored in a.
    printf("%d\n",a);
}
output:5
*/

/*
void main()
{
    int b=5;
    int a=(b+=5,b*=5,b/=2,b-=10);
    printf("%d\t %d\t",a,b);
}
//output:15 15.
*/

/*
void main()
{
    int a=-4;
    if(++a,a++,++a,a++)
        printf("in if\n");
    else
        printf("in else\n");
}
// a=-4
//++a=-3   precrement first increase and execute.
//a++=-2   postincrement first executes and increments
//++a=-1
//a++=0(-1 value will be sent to if condition and then increments that time a will become 0)

//output:in if.
*/

/*
void main()
{
    int a=-4;
    if(++a,a++,++a,++a)
        printf("in if\n");
    else
        printf("in else\n");
}
//output:in else.
*/

/*
void main()
{
    int a = (printf("FIVE "),printf("IN "),printf("DIGITS: "));
    printf("%d\n",a);
}
//output: FIVE IN DIGITS: 8
*/

//c program's memory management::

/*
---------
| CODE  | ---> Low level language code.
---------
| Global| ---> all global varibles are stored. (o by default), not deleted until end of program.
| Static|
---------
| Stack | ---> all local varibles,(garbage value by default) function calls are stored, deleted by end of their scope.
---------
| Heap  | ---> all dynamically allocated memory will be stored, not deleted until end of program.
---------
*/

// Storage Classes:

/*
c Language has 4 storage classes:
1.auto
2.register
3.static
4.extern

Every variable declared belongs to one storage class.

auto : default storage class for any variable.
1.they are stored in RAM
2.auto storage class variables are only valid within their scope.

register: Stored in cpu registers
1.Register variables are stored in CPU Registers. So, You cannot access it's address . Whether in scanf or printf.
2.Only accessible within its scope

Static: (Stays throughout the program)
1. Static variables are not deleted till end of the program.
2. Static variables are stored in global section of memory.
3.Static variables are 0 by default.
*/

/*
void main()
{
    int a=10;
    printf("%d\n",&a);
}
//output:6356732(address)
*/

/*
//1.they are stored in RAM
void main()
{
    int a=10;
    printf("%p\n",&a);// %p for addresses
}
//output:0060FEFC
*/

/*
2.auto storage class variables are only valid within their scope.
void main()
{
    {
        auto int a=10;
    }
    printf("%d\n",a);
}
//output:Error
*/

/*
//register: Stored in cpu registers
cpu registers don't have address.
void main()
{
    register int a=10;
    printf("%p\n",&a);// %p for addresses
}
//output:error: address of register variable 'a' requested|
*/

/*
void main()
{
    register int a;
    scanf("%d",&a);
    printf("%d\n",a);
}
//output:error: address of register variable 'a' requested|
*/

/*
void fun()
{
    int a=9;
    a++;
    printf("%d\n",a);
}
void main()
{
    fun();
    fun();
    fun();

}
//output:10 10 10
*/

/*
void fun(); //Function prototype means telling compilier that function is written afterwards i.e, after main() function.
void main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    int a=9;
    a++;
    printf("%d\n",a);
}
//output:10 10 10
*/

/*
void fun()
{
    const int a=9;
    a++;
    printf("%d\n",a);
}
void main()
{
    fun();
    fun();
    fun();
}
output:error
*/

/*
Static: (Stays throughout the program)
0. Static variable are stored in RAM.
1. Static variables are not deleted till end of the program.
2. Static variables are stored in global section of memory.
3.Static variables are 0 by default.
void fun()
{
    static int a=9; // in second function call this line will be skipped.
    a++;
    printf("%d\n",a);
}
void main()
{
    fun();
    fun();
    fun();
}
//Output:10,11,12
*/

// Difference between static and global variable
// static variable is declared within the function and it stays through out the program.
// Global variable is declared outside all the functions and stays through out the program.

/*
int fun()
{
    static int a=14;
    return a--;
}
void main()
{
    for(fun();fun();fun())
    {
        printf("%d\n",fun());
    }
}
*/


