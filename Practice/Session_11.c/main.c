#include<stdio.h>

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",*a+4);
}
//op: 14   (*a)+4=10+4=14 unary operator has highest precedence than +.
*/
/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",(*a+4));
}
//op: 14    ((*a)+4)=(10+4)=14
*/

/*
// Address arithmetic / pointer arithmetic:
whenever you add/ subtract addresses with an integer,
the integer is multiplied with a constant value.
the constant value is : size of datatype of address.
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",*(a+4));
}
//op: 50    *(100+4*sizeof(int))
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",a[4]);
}
//op: 50
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",4[a]);
}
//op: 50  a[4]=*(a+4)  4[a]=*(4+a)
// Therefore, a[i]=i[a];
//there is no such thing as index it is only for human understanding.
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",a[-1]);// a[-1]=*(a-1)
}
// in c and c++ there is no index out of bound error we
//can access outside values it could be any garbage value
//op: Garbage value
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    printf("%d\n",a[100000]);
}
//op: Garbage value (if that address exists)
*/

/*
void fun(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void main()
{
    int a[5]={10,20,30,40,50};
    fun(a,5);
}
//op:10 20 30 40 50
*/

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    //a[i][j]
    // i= number of arrays
    // j= number of elements in each array
    //2-D arrays are stored in continuous memory location.
    //when we declared like this the starting array address
    // and starting address of second array are taken into
    //another array and that address is stored in a.
    //2-D array are double pointers, similarly 3-D arrays are triple pointers.
    printf("%d\t",**a);
}
//op:10
*/

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",**a+1);
    //(**a)+1=10+1=11
}
//op:11
*/
/*
int a[2][5]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
address=     100 102 104 106 108 110 112 114 116 118
a  =    {100(starting address of first array) 110(starting address of second array)}
address= 90                                    92
a holds the address of this addresses array consider 90.
*/


/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",**(a+1));//**(90+1*sizeof(int))=**(92)=*(*92)=*(110)=60.
}
//op:60
*/

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",*(*a+1));
}
//op:20
*/

//a[i][j]=*(*(a+i)+j)

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",*(*(a+1)+4));
}
//op:100
*/

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",*(*(a+0)+5));
}
//op:60
*/

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",a[0][9]);
}
//op:100
*/

/*
void main()
{
    int a[2][5]={10,20,30,40,50,60,70,80,90,100};
    printf("%d\t",a[1][-5]);//a[1][-5]=*(*(a+1)-5)
}
//op:10
*/
// Array is a pointer.
//2-D array is a double pointer.


/*
void main()
{
    int a[5]={10,20,30,40,50};
    a=a+1;
    printf("%d\n",a[0]);
}
// array names are constant they can't be changed.
*/
