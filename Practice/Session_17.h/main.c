#include <stdio.h>
#include <stdlib.h>
/*
union var{
    char a[5];
    char c;
    int b;
};
void main()
{
    union var v1;
    printf("%lu\n",sizeof(v1));
}
//op:8
*/

/*
struct var{
    int k;
    char c;
};
void main()
{
    struct var v1;
    printf("%lu\n",sizeof(v1));
}
//op:8
*/

/*
Pointers can be
1.Wild pointers: Uninitialized pointer.
                 int *a;

2.Null pointers: Initialize a pointer to 0.
                 int *a=NULL;   print a= 0, print *a=Error/0

3.Dangling pointers: A pointer which is allocated dynamically.
Then, the memory pointed to, by the pointer is deallocated.

int *p=(int *)malloc(n*sizeof(int));
free(p);
//p is now a dangling pointer.

4.void pointer: A pointer with void as it's return type.

*/

/*
void main()
{
    int*p;//wild pointer
    int *q=NULL;//NULL pointer
    //printf("%d\n",*p);//will give segmentation Fault
    //printf("%d\n",q);//0
    printf("%d\n",*q);//will give segmentation Fault
    int a=5;
    void *r;
    printf("%d\n",*r); //Error ,invalid use of void expression.
    int *s=(int *)malloc(n*sizeof(int));
    s[0]= 10;
    free(s);
    printf("%d",s[0]); //random value
}
*/

/*
void main()
{
    int a=5;
    a++;
    printf("%d\n",a);
}
op:6
*/

/*
void main()
{
    const int a=5;
    a++;
    printf("%d\n",a);
}
// while compiling it gives error, we can't modify a.
*/

/*
void main()
{
    const int a=5;
    int *p=&a;
    ++*p;
    printf("%d\n",a);
}
//Warning: that pointer to a const is not const.
//op:6
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=&a;
    *p=*p+1;
    printf("%d\n",*p);
}
//op:11
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    const int *p=&a; //const is read only we cant modify.
    *p=*p+1;
    printf("%d\n",*p);
}
op:error
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    const int *p=&a; //const is read only we cant modify.
    p=p+1;
    printf("%d\n",*p);
}
//op:20
*/


/*
void main()
{
    int a[5]={10,20,30,40,50};
    int * const p=&a; //const is read only we cant modify.
    p=p+1;
    printf("%d\n",*p);
}
//op:Error
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    const int * const p=&a; //const is read only we cant modify.
    *p=*p+1;
    printf("%d\n",*p);
}
//op:Error
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    const const int * const p=&a; //we can write multiple const
    printf("%d\n",*p);
}
//op:10
*/

//we try to implement data-type
//Data structures
//%p-Hexadecimal
/*

Stacks
Queues
linked list
double linked list
trees
graphs
*/

// Stack

//FILO  LIFO

/*
#define SIZE 5
int stack[5];
int top=-1;
void push()
{
    int n;
    if(top==SIZE-1)
    {
        printf("Stack overflow\n");
        return;
    }
    else{
        printf("Enter the value:\n");
        scanf("%d",&n);
        top++;
        stack[top]=n; //stack[++top]=a
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else{
        printf("Deleted element is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    for(int i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}
void peek()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
        printf("The value present at top is %d\n",stack[top]);

}
void main()
{
    int ch,n;
    printf("Stack operations:");
    printf("1.Push\t2.Pop\t3.Display\t4.peek\t5.exit\n");
    while(1)
    {
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{
                    push();
                    break;
                    }
            case 2:{
                    pop();
                    break;
                   }
            case 3:{display();
                   break;}
            case 4:{peek();
                   break;}
            case 5:{exit(1);
                    break;}
            default:{printf("Invalid choice]\n");}

        }
    }

}
*/

