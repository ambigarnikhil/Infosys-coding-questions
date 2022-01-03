#include <stdio.h>
#include <stdlib.h>

//Insertion Sort:

/*
Initially consider first element as sorted.
For each unsorted array element X
    for each element Y of virtually sorted array.
        if Y > X
            Move sorted element to right of X
*/

/*
void main()
{
    int a[10]={4,5,7,8,6,3,9,2,1,0};
    int n=10,i,j;
    //Insertion sort Algorithm
    for(i=1;i<n;i++)
    {
         for(j=i;j>0 && a[j-1]>a[j];j--)
         {
             int temp=a[j];
             a[j]=a[j-1];
             a[j-1]=temp;
         }
    }

printf("Sorted array:\n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
*/
//It is stable and inplace algorithm.

/*
Why do we need insertion sort?
    when array is already sorted there are no swaps.
*/


//Quick sort:

int partition(int *a, int low, int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        do
        {
            i++;
        }while(a[i]<=pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i<j)
        {
            int temp= a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp= a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;

}
void quick_sort(int *a,int low, int high)
{
    if(low<high)
    {
        int mid_point;
        mid_point=partition(a,low,high+1); // find index of pivot element in its position.
        quick_sort(a, low, mid_point-1); // sort first half of array
        quick_sort(a,mid_point+1,high); // sort second half of array.
    }
}

void main()
{
    int a[10]={4,5,7,8,6,3,9,2,1,0};
    int n=10,i,j;

     quick_sort(a,0,n);


    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

//Worst Time complexity: O(n^2)
//Best Time complexity: O(n^log(n))

// Ouick sort is inplace.
//Quick sort is not stable, the order of elements may change.
