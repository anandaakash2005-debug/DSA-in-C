#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

struct Node*deleteAtstart(struct Node*head)
{
    struct Node*ptr=head;
   head=head->next;
   free(ptr);

    return head;
}

struct Node*deleteAtindex(struct Node*head,int index)
{
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++)
    {
       p= p->next;
       q=q->next;
    }
    p->next=q->next;
    free(q);

    return head;
};

struct Node*deleteAtend(struct Node*head)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next != NULL)
    {
       p= p->next;
      q= q->next;
    }
   p->next=q->next;
    free(q);

    return head;
};

struct Node*deleteAvalue(struct Node*head,int value)
{
    struct Node*p=head;
     struct Node*q=head->next;

   while(q->data != value && q->next != NULL)
   {
       p=p->next;
       q=q->next;
   }

   if(q->data == value)
   {
       p->next=q->next;
       free(q);
   }

   return head;
};

void linkedlisttraversal(struct Node*ptr)
{
    while(ptr != NULL)
    {
        printf("Elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=sec;

    sec->data=11;
    sec->next=third;

    third->data=22;
    third->next=NULL;

    printf("Before deletion\n");
    linkedlisttraversal(head);

    printf("After deletion\n");
    //head=deleteAtstart(head);
    //head=deleteAtend(head);
    //head=deleteAtindex(head,2);
    head=deleteAvalue(head,11);
    linkedlisttraversal(head);
    return 0;
}
