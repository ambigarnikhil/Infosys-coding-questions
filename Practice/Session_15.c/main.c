#include<stdio.h>
#include<stdlib.h>
/*
void main()
{
    int n;
    int *p,*q;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    //printf("%p\n",ptr);
    //printf("%d\n",ptr);
    printf("Enter the new number of elements:\n");
    scanf("%d",&n);
    q=(int *)realloc(p,n*sizeof(int));
    printf("%p\t%p\t",p,q);
}
*/
/*
malloc,calloc - allocate memory
free - deallocate memory.
*/
/*
void main()
{
    int n;
    int *p,*q;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    p[0]=10;
    printf("%p\n",p);
    printf("%d\n",p[0]);
    free(p);
    printf("%p\n",p);
    printf("%d\n",p[0]);
}

op:Enter the value of n:
5
006F0D88
10
006F0D88
7288696
*/

// DATA STRUCTURES
//String Functions:

#include<string.h>

/*
void main()
{
    char str[10]="Hello";
    printf("%d\n",strlen(str));
}
*/

/*
void main()
{
    char str[10]="Hello";
    printf("%s\n",strupr(str));
}
op:HELLO
*/

/*
void main()
{
    char str[10]="Hello";
    printf("%s\n",strlwr(str));
}
op:hello
*/

/*
void main()
{
    char str[10]="Hello";
    printf("%s\n",strrev(str));
}
op:olleH
*/

/*
void main()
{
    char str1[10]="Hello";
    char str2[10]="Hello";
    if(strcmp(str1,str2)) //strcmp returns zero if they are equal.
        printf("Equal\n");
    else
        printf("Not Equal\n");

}
op:Not equal
*/

/*
void main()
{
    char str1[10]="ZAB";
    char str2[10]="AAB";
    printf("%d\n",strcmp(str1,str2));
}
op:1
*/
//strcmp : it does str2 minus str1 and return the value , 0 and 1
//0:str1 and str2 are equal
//1: str1 and str2 are not equal


/*
void main()
{
    char str1[10]="GOODday";
    char str2[10]="GOODDAY";
    printf("%d\n",strncmp(str1,str2,4)); //first 4 characters compare only.
}
op:0
*/

//underscore function
/*
void main()
{
    char str1[10]="GOODday";
    char str2[10]="GOODDAY";
    printf("%d\n",_stricmp(str1,str2)); //compares without considering the case.
}
op:0
*/
//strstr it search str2 in str1 only for first occurence
// it will return 0 if not found
//it will return starting address if found
/*
void main()
{
    char str1[50]="The rain in spain is such a pain";
    char str2[5]="rain";
    printf("%p\n",str1);
    printf("%p\n",strstr(str1,str2));
    //printf("%d\n",strstr(str1,str2));
    printf("%s  \n",strstr(str1,str2));
}
op:
0060FECE
0060FED2
rain in spain is such a pain
*/

/*
void main()
{
    char str1[50]="The rain in spain is such a pain";
    char str2='p';
    printf("%p\n",str1);
    printf("%p\n",strchr(str1,str2));
    //printf("%d\n",strstr(str1,str2));
    printf("%s\n",strchr(str1,str2));
}
op:
0060FECD
0060FEDA
pain is such a pain
*/

/*
void main()
{
    char str1[50]="The rain in spain is such a pain";
    printf("%p\n",str1);
    printf("%p\n",strchr(str1,'s'));
    printf("%s\n",strchr(str1,'s'));
}
op:
0060FECD
0060FEDA
spain is such a pain
*/

/*
Structures and unions

structure: User defined datatype
*/

/*
struct phone
{
    char name[20];
    int ram;
    float price;
};
void main()
{
    struct phone p1={"oneplus 7T", 8,32999.50};
    printf("%s\t%d\t%f\t",p1.name,p1.ram, p1.price);
}
//op:oneplus 7T      8       32999.500000
*/

/*
void main()
{
    //local structure
    struct phone
    {
        char name[20];
        int ram;
        float price;
    };
    struct phone p1={"oneplus 7T", 8,32999.50};
    printf("%s\t%d\t%f\t",p1.name,p1.ram, p1.price);
}
//op:oneplus 7T      8       32999.500000
*/
