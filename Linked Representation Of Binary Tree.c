//Thanks Haris Bhaiya for teaching    here is the full code implemented in C

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* createNode(int data)
{
	struct Node* n=(struct Node*)malloc(sizeof(struct Node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;

	return n;
}
void LinkNode(struct Node* p,struct Node* c1,struct Node* c2)
{
	p->left=c1;
	p->right=c2;
}
int traverse(struct Node* tree)
{
	return tree->data;
}
int main()
{
	struct Node* p=createNode(13);
	struct Node* p1=createNode(16);
	struct Node* p2=createNode(113);
	LinkNode(p,p1,p2);
	printf("%d\n",traverse(p));
	printf("%d \n",traverse(p->left));
	printf("%d \n",traverse(p->right));
	return 0;

}
