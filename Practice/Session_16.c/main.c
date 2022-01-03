#include<stdio.h>
#include<stdlib.h>

// free will only deallocate memory assigned to the program we can still access the memory(read/write) even after freeing but as it will deallocated with the program any other program can use that memoru and can change the contents.
/*
struct phone
{
    char name[15];
    int ram;
    float price;
};
void main()
{
    struct phone p1;
    p1.name="Oneplus 10";
    p1.ram=16;
    p1.price=19999.20;
    printf("%s\n%d\n%f\n",p1.name,p1.ram,p1.prize);

}
op:error
*/

/*
we can assign elements to array only during declaration.
int a[5]={10,20,30,40,50}
Down thing can't be done
int a[5];
a[5]={10,20,30,40,50};
*/
#include<string.h>
/*
struct phone
{
    char name[15];
    int ram;
    float price;
};
void main()
{
    struct phone p1;
    strcpy(p1.name,"Oneplus 10");
    p1.ram=16;
    p1.price=19999.20;
    printf("%s\n%d\n%f\n",p1.name,p1.ram,p1.price);
}
op:
Oneplus 10
16
19999.199219
*/

/*
struct var
{
    int a;
    char b;
};
void main()
{
    struct var ={'A',100};
    printf("%d\n%c\n",var.a,var.b);
}
op:Error , no variable created
*/

/*
struct var
{
    int a;
    char b;
};
void main()
{
    struct var v1 ={'A',100};
    printf("%d\n%c\n",v1.a,v1.b);
}
op: 65 d
*/

/*
struct var
{
    int a;
    char b;
};
void main()
{
    struct var v1;
    printf("%lu\n",sizeof(v1));
}
//Therotically it should be 5 bytes but the op is 8.
//op:8
*/
/*
Structure padding : when ever we have larger datatype declared
first then the smaller datatype, smaller datatype is always padded
to reach the size of larger datatype.
In above program int takes 4 bytes and char takes only 1
byte but padding take place and other bytes are padded
with zero.


Data Alignment

*/
/*
struct var
{
    char b;
    int a;
};
void main()
{
    struct var v1;
    printf("%lu\n",sizeof(v1));
}
//Therotically it should be 5 bytes but the op is 8.
//op:8 (64-bit compiler )
*/

/*
struct var
{
    char b;
    double a;
};
void main()
{
    struct var v1;
    printf("%lu\n",sizeof(v1));
}
//Therotically it should be 9 bytes but the op is 16.
//op:16 (64-bit compiler )
*/

/*
struct var
{
    char b;
    double a;
    char c;
};
void main()
{
    struct var v1;
    printf("%lu\n",sizeof(v1));
}
//Therotically it should be 17 bytes but the op is 24.
//op:24 (64-bit compiler )
*/

/*
offset address(starting address should be considered as 0) for any structure variable.
Any variable stored in structure variable must start with an address as a multiple of the variables size.
If the last variable is smaller than the largest sized variable, the last variable is padded to meet size of largest variable.
*/

/*
struct var
{
    char b;
    int a;
    char c;
    char d;
};
void main()
{
    struct var v1 ={'A',100};
    printf("%lu\n",sizeof(v1));
}
op:12
*/
//Start from smaller sized variables within a structure and end up at larger sized variables.
/*
union var
{
    char b;
    char c;
    int a;
};
void main()
{
    union var v1;
    printf("%lu\n",sizeof(v1));
}
op:4
*/

/*
union var
{
    char b;
    char c;
    int a;
};
void main()
{
    union var v1;
    v1.b='A';
    v1.a=100;
    v1.c='Z';
    printf("%c\n",v1.a);
}
op:Z
*/

/*
Can I store  a union within a union?
Can I store a union within a structure?
Can I store a Structure within a structure?
Can I store a structure within a union?
Why does the size of union if we have char[5] be 8 instead of 5?

Union: takes only the size required by its largest element.
All elememts take turns by storing within the same size.
size of union is equal to its largest elements.

*/

/*
union var
{
    char b[5];
    char c;
    int a;
};
void main()
{
    union var v1;
    printf("%lu\n",sizeof(v1));
}
op:8 (32 bit compilier)
*/
