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
    return 0;
}

int isfull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack*ptr,int num)
{
    if(isfull(ptr))
    {
        printf("stack overflow!!\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=num;
    }
}

int pop(struct stack*ptr)
{
    if(isempty(ptr))
    {
        printf("stack underflow!!\n");
        return -1;
    }
    else
    {
        int num=ptr->arr[ptr->top];
        ptr->top--;
        return num;
    }
}

int main()
{
    struct stack*sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=4;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    printf("before inserting any value\n");
    pop(sp);
    push(sp,5);
    push(sp,9);
    push(sp,11);
    push(sp,13);
    printf("After inserting value\n");
    push(sp,17);
    return 0;
}
