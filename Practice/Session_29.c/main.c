#include <stdio.h>
#include <stdlib.h>

/*
Which is better? Quicksort or mergesort?



int main()
{
    printf("Hello world!\n");
    return 0;
}
Python uses Timsort(sorted function in python),it is inbuilt sorting method.
Dive deep by googling it.
Timsort is better compared to quick and merge sort.
Tim sort is a combination of merge sort and insertion sort.

Quick sort:
    Partition
    Worst time complexity: O(n^2)
    smaller dataset: Quick sort is better.
    It is inplace.

Merge sort:
    Split and merge
    Worst time complexity: O(n^log(n))
    large dataset :merge sort is better
    It is not inplace.
    It is used for linked list.

qsort()- Inbuilt sorting method in c language, it uses quick sort.
Worst time complexity: O(n^2)

sort() in C++ uses a hybrid of QuickSort, Heapsort and Insertion sort.
Worst time complexity: O(n^log(n))

stable_sort() in C++ uses Mergesort.
Worst time complexity: O(n^log(n))

Arrays.sort() in Java uses Quicksort.(Older version)
Arrays.sort() in Java uses Timsort.(newer version)
Worst time complexity: O(n^log(n)).

Collection.sort() in java uses mergesort
Worst time complexity: O(n^log(n))

sorted() and sort() in python uses Timsort
Worst time complexity: O(n^log(n))

Inplace(Internal sorting)
Out of Place(External sorting), you use additional memory to store arrays / lists.


C++ Language:

Difference between c and c++ programming language.
C++ ia superset of c or c is a subset of c++.
C++ supports Object oriented programming as well as procedure oriented programming.
C has 32 keywords, c++ has 52 keywords.
C-1999 (C99), C-2011 (C11), C-2017 (C17).
*/

/*
This program executes only in c despite c++ being superset:
int main()
{
    int public=5;
    return 0;
}
*/

/*
C++ has an extra datatype:
wchar_t stores UTF-16 (2 bytes long data)
boolean stores only as true or flase;
*/

/*
int main()
{
    bool a;
    printf("%d\n",sizeof(a));
    return 0;
}
//op:1
*/
/*
int main()
{
    bool a=false;
    printf("%d\n",a);
    return 0;
}
//op:0
*/
/*
int main()
{
    bool a=-99;
    printf("%d\n",a);
    return 0;
}
//op:1
*/
Input and output statements:
    cout to print
    cin to read

#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"Enter two elements to add"<<endl;
    std::cin>>a;
    std::cin>>b;
    c=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<std::endl;
    return 0;
}
