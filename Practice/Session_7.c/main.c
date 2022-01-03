#include <stdio.h>

/*
void main()
{
    int i=1;
    for(printf("This ");i--;printf("Is "))
    {
        printf("Awesome ");
    }
}
//output:This Awesome Is
*/

/*
void main()
{
    int i=1;
    for(printf("This ");printf("Is ");printf("Flower"))
    {
        printf("Awesome ");
    }
}
//output:Infinite loop
*/

/*
void main()
{
    int i=1;
    for(printf("This ");--i;printf("Is "))
    {
        printf("Awesome ");
    }
}
//output:This
*/

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
//output:12 9 6 3 0 -3 -6....
*/

/*
int fun()
{
    static int a=-7;
    return a++;
}
void main()
{
    for(fun();fun();fun())
    {
        printf("%d\n",fun());
    }
}
//output:-5 -2
*/

/*
void a()
{
    printf("3\n");
}
void b()
{
    printf("2\n");
    a();
    printf("4\n");
}
void main()
{
    printf("1\n");
    b();
    printf("5\n");
}
//output:1 2 3 4 5.
*/

/*
// Function call Stack
void main()
{
    int a=3;
    while(a)
    {
        printf("IN MAIN\n");
        a--;
        main();
    }
}
//segmentation fault after many executions.
//output: prints In main many times and finally (segmentation fault)core dumped stage (memory release )
*/

/*
void main()
{
    static int a=3;
    while(a)
    {
        printf("IN MAIN\n");
        a--;
        main();
    }
}
//output: IN MAIN
        //IN MAIN
        //IN MAIN
*/
