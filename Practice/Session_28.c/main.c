#include <stdio.h>
#include <stdlib.h>



//Merge sort:
void merge(int *a,int low,int mid,int high)
{
    int num_elements_1 = mid-low+1;
    int num_elements_2 = high-mid;
    int *n1=(int *)malloc(num_elements_1*sizeof(int));
    int *n2=(int *)malloc(num_elements_2*sizeof(int));
    for(int i=0;i<num_elements_1;i++)
        n1[i]=a[low+i];
    for(int j=0;j<num_elements_2;j++)
        n2[j]=a[mid+j+1];
    int i=0,j=0,k=low;
    while(i<num_elements_1 && j<num_elements_2)// when both sub arrays have elements.
    {
        if(n1[i]<=n2[j])
            a[k++]=n1[i++];
        else
            a[k++]= n2[j++];
    }
    while(i<num_elements_1)//when first sub array has elements
        a[k++]=n1[i++];
    while(i<num_elements_2)//when second sub array has elements
        a[k++]=n1[j++];
}
void mergesort(int *a,int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void main()
{
    int a[10]={4,5,7,8,6,3,9,2,1,0};
    int n=10,i,j;

    mergesort(a,0,n-1);


    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

//Is merge sort stable? Yes
//Is merge sort inplace? No
//Which is better? Quicksort or mergesort?
