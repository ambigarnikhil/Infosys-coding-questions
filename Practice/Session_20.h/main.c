
#include <stdio.h>
#include <stdlib.h>
//Circular Queue.
/*
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value)
{
    if((rear+1)%SIZE==front)
    {
        printf("Queue overflow\n");
        return;
    }
    if(front==-1)
        front++;
    rear=(rear+1)%SIZE;
    queue[rear]=value;
    printf("Value %d is inserted in index %d\n",value,rear);
}
int dequeue()
{
    if(front==-1)
    {
        printf("Queue underflow\n");
        return -999;
    }
    if(front==rear)//if queue has only one element
    {
        int value= queue[front];
        printf("Valued %d removed from index %d\n",value,front);
        front=rear=-1;
    }
    else //Queue has more than one element
    {
        int value=queue[front];
        printf("Valued %d removed from index %d\n",value,front);
        front=(front+1)%SIZE;
        return value;
    }
}
void display()
{
    if(front==-1)
        printf("Queue Empty\n");
    else
    {
        int i;
        for(i=front;i!=rear;i=(i+1)%SIZE)
            printf("%d\t",queue[i]);
        printf("%d\n",queue[i]);
    }
}
void main()
{
    for(int i=10;i<=50;i+=10)
        enqueue(i);
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    display();

}

*/

//Stack: Browsers,undo/redo
//queue: Railway ticket booking.

// Acessing in arrays is easy(arr[i]) compared to linked list
//Insert/delete in linked list is easy ,compared to array.

/*
struct node
{
    int data;
    struct node *next;
};
void main()
{

}
*/
