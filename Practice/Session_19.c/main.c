#include<stdio.h>
/*
order of brackets should be checked in an expression:
    ip:[a+{b+c}+{c+(d+e)}]
    op:Right order
*/
//time complexity:www.bigocheatsheet.com

//Queue-FIFO LILO
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value)
{
    if(rear==SIZE-1)
    {
        printf("Queue overflow\n");
        return;
    }
    if(front==-1)
        front++;
    queue[++rear]=value;
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
        front++;
        return value;
    }
}
void display()
{
    if(front==-1)
        printf("Queue Empty\n");
    else
    {
        for(int i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
}
void main()
{
    for(int i=10;i<=50;i+=10)
        enqueue(i);
    dequeue();
    dequeue();
    enqueue(60);

}
