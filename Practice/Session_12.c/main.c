#include<stdio.h>

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    int c=++*p;
    printf("%d\t%d\n",c,*p);
}
//op: 11 11
*/

/*
 void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    int c=*++p;
    printf("%d\t%d\n",c,*p);
}
//op: 20 20
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    int c=*p++;
    printf("%d\t%d\n",c,*p);
}
//op: 10 20
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    int c=(*p)++;
    printf("%d\t%d\n",c,*p);
}
//op: 10 11
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    printf("%d\t%d\t%d\t%d\n",++*p,*p++,(*p)++,*++p);
}
//printf- executes from right to left.
//op: 31 21 20 20
*/

/*
++*p: pre increment of the value
*++p: pre increment of the address
*p++: post increment of the address
(*p)++: post increment of the value.
*/

//Important for interviews.

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    printf("%d\t%d\t%d\t%d\n",*++p,(*p)++,*p++,++*p);
}
//op: 30 20 11 11
*/

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=&a[5];  //note a[4] is last element so address will point to a[4]+1*(sizeof())
    printf("%d\t%d\t%d\t%d\n",--*p,*p--,(*p)--,*--p);
}
//op: 39 49 50 50
*/

/*
//Strings//
it will always ends with a null character i.e, "\0".
NEVERODDOREVEN --palindrome.
N E V E R O D D O R E  V  E  N  \0
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
*/
/*
void main()
{
    char str[50];
    scanf("%s",str);//reads only one word.
    printf("%s",str);
}
//INPUT:HELLO WORLD
//OUTPUT:HELLO
*/

/*
void main()
{
    char str[50];
    scanf("%[^\n]",str); // scanf reads all characters except new line characters
    printf("%s",str);
}
//INPUT:HELLO WORLD TODAY
//OUTPUT:HELLO WORLD TODAY
*/

/*
void main()
{
    char str[50];
    gets(str);
    puts(str);
}
//INPUT:HELLOOOOO MR
//OUTPUT:HELLOOOOO MR
*/

// compiler warning: gets function is dangerous and should not be used.

/*
void palindrome(char *str)
{
    int i=0;
    int j=0;
    while(str[j]!="\0")
    {
        j++;
    }
    j--;
    while(i<j)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
        else
        {
            printf("Not a palindrome\n");
            return;
        }
    }
    printf("String is palindrome\n");
}
void main()
{
    char str[50];
    gets(str);
    palindrome(str);
}
*/