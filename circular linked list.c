#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void linkedlisttraversal(struct Node*head)
{
    struct Node*ptr=head;
    do
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr->next != head);
}

struct Node*insertAtfirst(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    while(p->next != head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
};

int main()
{
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));
    struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=sec;

    sec->data=11;
    sec->next=third;

    third->data=22;
    third->next=fourth;

    fourth->data=31;
    fourth->next=head;

    printf("circular linked list circular before insertion\n");
     linkedlisttraversal(head);

     printf("circular linked list After insertion\n");
    head=insertAtfirst(head,3);
    linkedlisttraversal(head);
}
