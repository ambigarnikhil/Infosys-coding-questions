#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
/*
int main()
{
    struct node *s1,*s2,*s3;
    s1=(struct node *)malloc(sizeof(struct node));
    s2=(struct node *)malloc(sizeof(struct node));
    s3=(struct node *)malloc(sizeof(struct node));
    s1->data=10;
    s1->next=s2;
    s2->data=20;
    s2->next=s3;
    s3->data=30;
    s3->next=NULL;
    printf("s1->data:%d\n",s1->data);
    return 0;
}
*/
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
            case 2:
                   break;
            case 3:display();
                   break;
            case 4:
                   break;
            case 5:
                   break;
            case 6:printf("Enter the element:\n");
                   scanf("%d",&data);
                   insertend(data);
                   break;
            case 0:exit(1);
                   break;
            default:printf("");

        }
    }
}
