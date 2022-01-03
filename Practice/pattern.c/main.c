#include<stdio.h>
/*
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int m=2*n;
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<m;j++)
        {
            printf("* ",n);
        }
        printf("\n");
    }
}
*/
/*
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ",n);
        }
        printf("\n");
    }
}
*/

/*
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ",n);
        }
        for(int k=1;k<=i;k++)
        {
            printf("*",n);
        }
        printf("\n");
    }
}
op:
    *
   **
  ***
 ****
*****
*/

/*
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf(" ",n);
        }
        for(int j=5;j>=i;j--)
        {
            printf("*",n);
        }

        printf("\n");
    }
}

op:
 *****
  ****
   ***
    **
     *
*/
