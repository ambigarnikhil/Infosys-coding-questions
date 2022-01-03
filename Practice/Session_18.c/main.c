#include<stdio.h>

/*
#define SIZE 5
int stack[5];
int top=-1;
void push(int n)
{
    if(top==SIZE-1)
    {
        printf("Stack overflow\n");
        return;
    }
    else{
        top++;
        stack[top]=n; //stack[++top]=a
    }
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return -999;
    }
    else{
        //printf("Deleted element is %d\n",stack[top]);
        int value=stack[top--];
        return value;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    for(int i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}
int peek()
{
    if(top==-1)
    {
        //printf("Stack underflow\n");
        return -999;
    }
    else
        //printf("The value present at top is %d\n",stack[top]);
        return stack[top];

}
/*
Go through each character of the expression.
if char is an operand: Push onto stack
if char is operator: pop last two operands, perform operation, push result
print resulting value

void postfix_evaluate(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48 && str[i]<=57)
            push(str[i]-48);
        else
        {
            if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%')
            {
                int operand2=pop();
                int operand1=pop();
                if(operand1==-999)
                {
                    printf("Invalid input");
                    return;
                }
                switch(str[i])
                {
                    case '+':push(operand1+operand2);
                             break;
                    case '-':push(operand1-operand2);
                             break;
                    case '*':push(operand1*operand2);
                             break;
                    case '/':push(operand1/operand2);
                             break;
                    case '%':push(operand1%operand2);
                             break;
                }

            }
            else
            {
                printf("Invalid operation\n");
                return;
            }
        }
    }
    int result=pop();
    if(peek()==-999)
        printf("Result:%d\n",result);
    else
        printf("Invalid Expression\n");
}
void main()
{
    char str[20]="53*84/-";
    postfix_evaluate(str);
}

*/

// TIME COMPLEXITY AND SPACE COMPLEXITY

