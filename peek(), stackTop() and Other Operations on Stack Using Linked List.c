#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

struct Node*top=NULL;

void linkedlisttraversal(struct Node*ptr)
{
    while(ptr != NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int isempty(struct Node*top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct Node*top)
{
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node*push(struct Node*top,int x)
{
    if(isfull(top))
    {
        printf("stack overflow!!\n");
    }
    else
    {
        struct Node* n=(struct Node*)malloc(sizeof(struct Node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
};

int peek(int pos)
{
    struct Node*ptr=top;
    for(int i=0;(i<pos-1 && ptr != NULL);i++ )
    {
        ptr=ptr->next;
    }
    if(ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int stacktop(struct Node *top)
{
    if(top != NULL)
    {
        return top->data;
    }
    else
    {
        return -1;
    }
}

int pop(struct Node**top)
{
    if(isempty(*top))
    {
        printf("stack Underflow!!\n");
    }
    else
    {
        struct Node*n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
}

int stackbottom(struct Node*top)
{
    struct Node*ptr=top;
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    return ptr->data;
}

int main()
{
    top=push(top,78);
    top=push(top,56);
    top=push(top,34);
    top=push(top,22);

   /* int element=pop(&top);
    printf("poped element is:%d\n",element);*/

    linkedlisttraversal(top);

    //printf("value at position 1 is:%d\n",peek(1));

    for(int i=0;i<4;i++)
    {
        printf("value at position %d is:%d\n",i,peek(i));
    }

    printf("top element in the stack is:%d\n",stacktop(top));

    printf("Bottom element in the stack is:%d\n",stackbottom(top));

    return 0;
}
