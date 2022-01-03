#include <stdio.h>
#include <stdlib.h>


//preorder: 50-17-12-9-14-23-19-72-54-67-76.

//inorder: 9-12-14-17-19-23-50-54-67-72-76.

// postorder:9-14-12-19-23-17-67-54-76-72-50.


//Selection sort:it is stable, inplace.
//Bubble sort takes more swaps, compared to selection sort.
//whenever memory writing is expensive, go for selection sort.Because swaps done are minimal(only n).
//Time complexity: o(n^2)
/*
void main()
{
    int a[10]={4,5,7,8,6,3,9,2,1,0};
    int n=10,i,j,min_index;
    //Selection sort Algorithm
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<=n-1;j++) //search with next indices.
        {
            if(a[j]<a[min_index])// find index of minimum
                min_index=j;
        }
        int temp=a[i];
        a[i]=a[min_index];
        a[min_index] = temp;
    }

printf("Sorted array:\n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
*/
