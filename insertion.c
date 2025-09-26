#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void linkedlisttraversal(struct Node*ptr)
{
    while(ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }
}

struct Node*insertAtfirst(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

struct Node*insertAtindex(struct Node*head,int data,int index)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!= index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};

struct Node*insertAtend(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head;
    while(p->next != NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
};

struct Node*insertAfterNode(struct Node *head,struct Node *prevNode,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;
};

int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;

    //Allocate memory for nodes in the linked list in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;

    //link second and third nodes
    second->data=11;
    second->next=third;

    //terminate the list at the third node
    third->data=66;
    third->next=NULL;

    printf("Linked list before insertion\n");
    linkedlisttraversal(head);
    //head=insertAtfirst(head,89);
    //head=insertAtindex(head,56,1);
    //head=insertAtend(head,69);
    head=insertAfterNode(head,second,45);
    printf("Linkedlist after insertion\n");
    linkedlisttraversal(head);

    return 0;
}
