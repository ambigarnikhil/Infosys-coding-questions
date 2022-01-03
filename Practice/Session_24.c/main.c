#include <stdio.h>
#include <stdlib.h>

/*
how many elements will be there at a level i of a binary tree at maximum?
2^i is the max. amount of elements at level i.

how many elements can a binary tree of n levels have ?
(2^n)-1;

Types of Binary Trees:

Full Binary Tree: Binary tree with all nodes having either 0/2 children.
Complete binary tree: A binary tree which has all nodes with 2 children's with the exception:
                      Last level has either 0 children , 1 child(only to left) or 2 children.
Perfect Binary tree: A binary tree where every node has two children until last level.
Pathological Binary tree (or) Degenerate Binary tree: Has only one direction in the tree.



Binary search tree: For each node , all values to the left of it are lesser than the node,
and all the values to the right are greater than the root;

Balanced binary search tree: The right sub tree and left sub tree must have a difference of height as +1/-1 at maximum.

Traversal of trees:

Breadth first search : Level order Traversal.

Depth first search: Preorder, Inorder, postorder.

Preorder: Root- left - right
First element is always root.
after root, left sub tree is printed followed by right sub tree.
second element to root is always left sub child as long as we have a left sub child.


Inorder: left - root - right
everything to left of root node is left sub tree
Everything to right of root node is right sub tree.


Postorder:left - right - root
First, left subtree. Then, right subtree.


preorder: 50-17-12-9-14-23-19-72-54-67-76.

inorder: 9-12-14-17-19-23-50-54-67-72-76.

postorder:9-14-12-19-23-17-67-54-76-72-50.

Find one expression given other expression?
How to build the tree back from expression?


Below trees,we need to know them, implementation of code is not necessary.
B+ Tree:More than one data per variable or more than two elements linked via address per variable.(Used in DBMS)

Self balancing Trees-
B- Tree:
AVL tree:
Red Black tree:



Heap Trees-
Min Heap tree:
Max Heap Tree:

*/

/* Binary search for arrays
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high=9;
    int mid;
    int n;
    printf("Enter the element to search:\n");
    scanf("%d",&n);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(n==a[mid])
        {
            printf("Element %d is found at %d location\n",n,mid);
            return;
        }
        else if(n>a[mid])
            low=mid+1;
        else if(n<a[mid])
            high=mid-1;
    }
    printf("Element %d not found.\n",n);

    return 0;
}
*/
