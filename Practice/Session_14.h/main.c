#include <stdio.h>
#include<stdlib.h>

//EOP:End of program

/*
void main()
{
    int a,b,c;
    printf("Enter the values of a and b\n");
    c=scanf("%d%d",&a,&b);  //scanf returns how many variables are read.
    printf("%d\n",c);
}
//op:2
*/

/*
void main()
{
    int a,b,c;
    printf("Enter the values of a and b\n");
    c=scanf("%d",&a,&b);  //scanf returns how many variables are read.
    printf("%d\n",c);
}
//op:1
*/

/*
malloc and calloc are used to allocate dynamic memory.
malloc takes number of bytes as input and provides continuous memory of given number of bytes.
this continuous memory is not 0's but garbage value.

calloc takes two parameters : number of blocks and size of each block.
calloc also provides continuous memory.
calloc ensures each block is assigned with zeros instead of GV.

*/
//malloc - memory allocation
//it is a communication between program and memory manager.

//whatever is stored in heap not deleted till end of program.

/*
void main()
{
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
}
*/
//sparse matrix: matrix which has more zeros.
//malloc allocates memory with garbage values.
//malloc: malloc(n*sizeof(d_types))
//calloc allocates memory with zero values.
//calloc: calloc(n,sizeof(d_types))

/*
malloc(size_in_bytes);
returns void pointer

calloc(number_of_blocks, size_of_each_block);
returns void pointer
/*
void main()
{
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        printf("%d\t",ptr[i]);
}
*/

/*
void main()
{
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d\t",&ptr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",ptr[i]);
}
*/

/*
Realloc: to resize memory allocated using malloc/calloc.
new_starting_address=(datatype *)realloc(current_starting_add,new_size_in_bytes)
*/

void main()
{
    int n,i,m;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d\t",&ptr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",ptr[i]);
    printf("\n");
    printf("Enter the new size:\n");
    scanf("%d",&m);
    int *new1= (int *)realloc(ptr,m*sizeof(int));
    for(i=0;i<m;i++)
        printf("%d\t",new1[i]);

}
