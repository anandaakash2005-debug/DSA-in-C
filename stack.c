#include<stdio.h>

int main()
{
    int stack[5],temp,top=-1;
    int ch;

    while(1)
    {
        printf("press 1 for entering element\n");
        printf("press 2 for deleting an element\n");
        printf("press 3 for show top element\n");
        printf("press 4 for existing from the loop\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            if(top == 4)
            {
                printf("overflow!!\n");
            }
            else
            {
                printf("pls enter the element\n");
                scanf("%d",temp);
                stack[++top]=temp;
            }

        break;

        case 2:
            if(top == -1)
            {
                printf("underflow!!\n");
            }
            else
            {
                printf("deleted element is:%d\n",stack[top]);
                top=top-1;
            }
            break;

        case 3:
            if(top == -1)
            {
                printf("underflow!!\n");
            }
            else
            {
                printf("Top element is:%d\n",stack[top]);
            }
            break;

        case 4:
            {
                printf("you are existing from  program\n");
                return 0;
            }

        default:
            {
                printf("you enter wrong input!!\n");
            }
        }
    }
    return 0;
}
