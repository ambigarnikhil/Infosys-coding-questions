#include<stdio.h>
/*
void main()
{
    int a=10,c; //when we increment an variable twice or more then once output can be totally undefined it may be anything.
    c= ++a + ++a; // ; refers to data saving so before saving we are changing it twice.
    printf("%d\n",c);
}
//op: Anything
*/

//We cant change value twice before using semi colon.
//Suppose printf("%d\n%d\n%d\n",i++,++i,i++) output will be undefined

/*
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    int result= (++*p) + (++*p);
    printf("%d\n",result);
}
*/

/*
void palindrome(char *str[])
{
    int low=0,high=0;
    while(str[high]!="\0")
        high++;
    high--;
    printf("%d\n",high);
    while(low<high)
    {
        if(str[low]==str[high])
        {
            low++;
            high--;
        }
        else{
            printf("Not a Palidrome");
            return;
        }
    }
    printf("Palidrome");
}

void main()
{
    char str[50];
    scanf("%s",str);
    printf("%s",str);
    palindrome(str);
}
//op:Code is not executing in my IDE.
*/

//Command line interface.

//we can read input by two ways one is stdin and command line interface.
//stdin uses scanf and printf

/*
void main(int argc, char **argv)
{
    printf("%d\n",argc);
}
/*
op: while executing on linux machine we can add arguments with the run command.
    like ./a.out 10 20 30 then it will print 4 i.e, first is program name and then 3 arguments that are 10,20,30.
*/
// ./a.out    10      20      30      40     50
// argv[0]  argv[1] argv[2] argv[3] argv[4]  argv[5]
//argc=6

/*
void main(int argc, char **argv)
{
    int result=argv[1]+argv[2];
    printf("%d\n",result);
}
//op:error
*/

/*
void main(int argc, char **argv)
{
    printf("%s\n",argv[1]);
}
//ip:./a.out 10 20 30
//op: 10
*/

/*
void main(int argc, char **argv)
{
    printf("%s\n",argv[0]);
}
//ip:./a.out 10 20 30
//op: ./a.out
*/

/*
void main(int argc, char **argv)
{
    printf("%c\n",argv[0][4]);
}
//ip:./a.out 10 20 30
//op: o
*/

/*
#include<stdlib.h> //This library as a function named atoi i.e, ascii to integer.
void main(int argc, char **argv)
{
    int result=atoi(argv[1])+atoi(argv[2]);
    printf("%d\n",result);
}
//ip:./a.out 10 20 30
//op: 30
*/

/*
#include<stdlib.h> //This library as a function named atoi i.e, ascii to integer.
void main(int argc, char **argv)
{
    long result=atol(argv[1])+atol(argv[2]);
    printf("%ld\n",result);
}
//ip:./a.out 10 20 30
//op: 30
*/

/*
#include<stdlib.h> //This library as a function named atoi i.e, ascii to integer.
void main(int argc, char **argv)
{
    long result=atol(argv[1])+atol(argv[2]);
    printf("%ld\n",result);
}
//ip:./a.out 10.5 20.5 30
//op: 30
*/

/*
#include<stdlib.h> //This library as a function named atoi i.e, ascii to integer.
void main(int argc, char **argv)
{
    float result=atof(argv[1])+atof(argv[2]);
    printf("%f\n",result);
}
//ip:./a.out 10.5 20.5 30
//op: 31.000000
*/

/*
#include<stdlib.h> //This library as a function named atoi i.e, ascii to integer.
void main(int a, char **b)
{
    float result=atof(b[1])+atof(b[2]);
    printf("%f\n",result);
}
//ip:./a.out 10.5 20.5 30
//op: 31.000000
*/

//length of argv : (it is compiler dependent) their is no length limit but their is a size limit of 256KB.
/*
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];//we cant do this older compilers like turboo in new compilers we can do it.

}
*/
//Dynamic memory allocation//


void main()
{
    int a[6][6];
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    int max=0;
    for(k=0;k<4;k++)
    {
        for(l=0;l<4;l++)
        {
            for(int i=k;i<k+3;i++)
            {
                for(int j=l; j<l+3; j++)
                {
                    if((i==1 && j==0) || (i==1 && j==2))
                        {
                            continue;
                        }
                    else
                    {
                        sum=sum+arr[i][j];
                    }
                }
            }
        if(sum>max)
        {
            max=sum;
        }
        }
    }


}
