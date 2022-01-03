/*
B- Trees: use internet shashank sir not explained, he said it is similar to B+ trees.

Self-Balanced Trees:
    1) Avl Tree: Auto - self balancing either by right rotation or left rotation.
    2) Red-black Tree: Each node of the tree is assigned a color (Red/ Black).

Heap Tree:
    1)Min heap tree: Root will have the min. most element.
    2)Max heap tree: Root will have the max. most element.

Sorting Algorithms:
Bubble sort: Worst time complexity-O(n^2)
Selection sort: Worst time complexity-O(n^2)
Insertion sort: Worst time complexity-O(n^2)
Merge sort: Worst time complexity-O(n^log(n))
Quick sort: Worst time complexity-O(n^log(n))
*/
/*
Bubble sort works faster when array is sorted with a time complexity of O(n).
Merge/quick sort works faster when array is not sorted with a time complexity of O(nlog(n)).
Tim sort is a modification of Merge Sort. This is used as default sorting algorithm in python's sorted function.
*/
//Bubble sort:

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *a;
    int n=10,i,j;
    a=(int *)calloc(10,sizeof(int));
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)// There are n-1 passes.
    {
        int swapped=0;
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0)
            break;
    }
    printf("Sorted array:\n");
    for(int i=0;i<10;i++)
        printf("%d\t",a[i]);
}

//Time complexity:
//Best: omega(n);
//Worst: O(n^2);
//Bubble sort is a stable algorithm.
//Bubble sort is inplace algorithm.
/*
Stable sorting Algorithm:
    Any sorting algorithm where two equal values should appear in
    the same order in input as well as output.

Inplace Sorting Algorithm:
    Any sorting algorithm that does not take significant extra space(Somewhat equal to size of the array for large arrays), then the algorithm is not inplace.
/*

/*
//Dynamically allocating 2-D array
void main()
{
     int **arr;
    arr=(int **)calloc(4,sizeof(int*));
    for(int i=0;i<4;i++)
        arr[i]=(int *)calloc(4,sizeof(int));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
*/

/*
Selection Sort:
    inplace algorithm.
    divide the array into two parts sorted & unsorted array.
    Initiallu, your array is divided into sorted/unsorted.
    sorted has no elements.
    unsorted has all the elements.
    find the smallest element in unsorted array and move it to sorted array.
    (You dont use extra space)
    Sorted array is first part array, unsorted is last part of array.
    You swap smallest element to the first part of the array.
*/
