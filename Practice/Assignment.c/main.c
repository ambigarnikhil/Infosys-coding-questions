
/*
#include<math.h>
int prime(int n)// Return 1 if number is prime or o if not prime.
 {
     int m=sqrt(n);
     for(int i=2;i<=m;i++)
     {
         if(n%i==0)
            return 0;
     }
     return 1;

 }
 void main()
 {
     int n;
     int m;
     int p,a;
     printf("Enter the number:\n");
     scanf("%d\n");
     for(int i= n-1; i>=1;i--)
     {
         m= prime(i);
         if(m!=0)
         {
             m=i;
             break;
         }
     }
     for(int j= n+1; j<=1000;j++)
     {
         p= prime(j);
         if(p!=0)
         {
             p=j;
             break;
         }
     }
     if(n-m<p-n)
     {
         a=m;
     }
     else
        a=p;
     printf("%d\n",a-n);

 }
 */

 /*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {

  //Write your code here.
  int and=0;
  int or=0;
  int xor=0;
  int temp, temp1, temp2;
  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n+1;j++)
      {
          //printf("%d %d:",i,j);
          temp=i&j;
          if(temp>and && temp<k)
            and =temp;
          temp1=i|j;
          if(temp1>or && temp1<k)
            or =temp1;
          temp2=i^j;
          if(temp2>xor && temp2<k)
            xor =temp2;
          //printf("and:%d or:%d xor:%d\n",and,or,xor);
      }
  }
  printf("%d\n%d\n%d\n",and,or,xor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
2 2 2
2 1 2
2 2 2

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/

/*
int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int m=2*n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d ",n);
        }
        n--;
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int j=0;j<n;++j)
        scanf("%d",&arr[j]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        //printf("%d",arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    free(arr);
    return 0;
}
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    scanf("%s",s);
    int len=0;
    int i=0;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d",len);
    int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='1')
            one++;
        else if(s[i]=='2')
            two++;
        else if(s[i]=='3')
            three++;
        else if(s[i]=='4')
            four++;
        else if(s[i]=='5')
            five++;
        else if(s[i]=='6')
            six++;
        else if(s[i]=='7')
            seven++;
        else if(s[i]=='8')
            eight++;
        else if(s[i]=='')
            nine++;
    }
    printf("%d %d %d %d %d %d %d %d %d",one,two,three,four,five,six,seven,eight,nine);
    return 0;
}
