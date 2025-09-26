#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack*ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr,int value)
{
    if(isfull(ptr))
    {
        printf("stack is overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("stack is underflow\n");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack* sp,int i)
{
    int arrind=sp->top-i+1;

    if(arrind < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrind];
    }
}

int main()
{
   /* struct stack s;
    s.size=80;
    s.top=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));*/

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    printf("stack created succesfully\n");

    printf("before pushing,FULL:%d\n",isfull(s));
    printf("before pushing,empty:%d\n",isempty(s));
    push(s,85);
    push(s,61);
    push(s,23);
    push(s,9);
    push(s,14);
    push(s,55);
    push(s,30);
    push(s,87);
    push(s,21);
    push(s,19);
    //push(s,63);
    printf("After pushing,FULL:%d\n",isfull(s));
    printf("After pushing,empty:%d\n",isempty(s));

    printf("poped %d from the stack\n",pop(s));
    printf("poped %d from the stack\n",pop(s));
    printf("poped %d from the stack\n",pop(s));

    for(int j=0;j < s->top;j++)
    {
        printf("The value at index %d is %d\n",j,peek(s,j));
    }

    return 0;
}
