#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
void insertbegin(int data)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=root;
    root=temp;
}
void insertend(int data)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}
void delete(int data)
{
    if(root==NULL)
    {
        printf("Linked list is Empty. Cannot delete elements\n");
    }
    else
    {
        struct node *p=root;
        struct node *q;
        if(root->data==data)
        {
            root=root->next;
            free(p);
        }
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
            if(p->data==data)
            {
               q->next=p->next;
               free(p);
               return;
            }
        }
        printf("Key element not found\n");
    }
}
void display()
{
    if(root==NULL)
    {
        printf("Linked list is Empty\n");
    }
    else
    {
        struct node *p=root;
        while(p->next!=NULL)
        {
            printf("%d->",p->data);
            p=p->next;
        }
        printf("%d\n",p->data);
    }
}
void reverse()
{
    if(root==NULL)
    {
        printf("Linked list is Empty.Cannot reverse\n");
    }
    else if(root->next==NULL)
        printf("Linked list has one element. No need for reversing\n");
    else
    {
        struct node *prev=NULL;
        struct node *curr=root;
        struct node *ahead=root->next;
        while(ahead!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=ahead;
            ahead=ahead->next;
        }
        curr->next=prev;
        root=curr;
    }
}
void search(int data)
{
    if(root==NULL)
    {
        printf("Linked list is Empty. Element cannot be searched\n");
    }
    else
    {
        int frequency=0,index=0;
        struct node *p=root;
        if(p->data==data)
        {
            frequency++;
            printf("Key element found in index %d\n",index);
        }
        index++;
        while(p->next!=NULL)
        {
            p=p->next;
            if(p->data==data)
            {
                frequency++;
                printf("Key element found in index %d\n",index);
            }
            index++;
        }
        if(frequency==0)
            printf("Key element not found\n");
        else
        {
            printf("Key element found %d times\n",frequency);
        }
    }
}
void main()
{
    int ch,data;
    printf("\n\n---------LINKED LIST OPERATIONS--------------\n\n");
    while(1) // Menu driven program
    {
        printf("\n\n-----------------------\n\n");
        printf("1.Insertbegin\n2.Delete\n3.Display\n4.Search\n5.Reverse\n6.Insertend\n0.Exit\n");
        printf("\n\n-----------------------\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element:\n");
                   scanf("%d",&data);
                   insertbegin(data);
                   break;
            case 2:printf("Enter the element to delete:\n");
                   scanf("%d",&data);
                   delete(data);
                   break;
            case 3:display();
                   break;
            case 4:printf("Enter the element to search:\n");
                   scanf("%d",&data);
                   search(data);
                   break;
            case 5:reverse();
                   break;
            case 6:printf("Enter the element:\n");
                   scanf("%d",&data);
                   insertend(data);
                   break;
            case 0:exit(1);
                   break;
            default:printf("Invalid choice\n");

        }
    }
}
/*
how many elements will be there at a level i of a binary tree at maximum?
2^i is the max. amount of elements at level i.

how many elements can a binary tree of n levels have ?
(2^n)-1;

Types of Binary Trees:

Full Binary Tree: Binary tree with all nodes having either 0/2 children.
Complete binary tree: A binary tree which has all nodes with 2 childrens with the exception:
                      Last level has either 0 children , 1 child(only to left) or 2 children.
Perfect Binary tree: A binary tree where every node has two children until last level.
Pathological Binary tree (or) Degenerate Binary tree: Has only one direction in the tree.
Binary search tree:
B+ Tree:
B- Tree:
Min Heap tree:
Max Heap Tree:
AVL tree:
*/
