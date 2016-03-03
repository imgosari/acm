#include <stdio.h>
#include <malloc.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

typedef struct Tree
{
	int data;
	Tree *left, *right;
}; 
Tree *t1, *t2, *t3;
void preorder(Tree *tree)
{
	if(tree)
	{
		printf("%d\n", tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}
}
void middleorder(Tree *tree)
{
	if(tree)
	{
		middleorder(tree->left);
		printf("%d\n", tree->data);
		middleorder(tree->right);
	} 
}
void postorder(Tree *tree)
{
	if(tree)
	{
		postorder(tree->left);
		postorder(tree->right);
		printf("%d\n", tree->data);
	} 
}

int Max_Depth(Tree *tree) // 트리의 최대 깊이 반환
{
	int depth = 0;
	if(tree != NULL)
		depth = 1 + MAX(Max_Depth(tree->left), Max_Depth(tree->right));
	return depth;
} 
int main()
{  
	t1 = (Tree*)malloc(sizeof(Tree));
	t2 = (Tree*)malloc(sizeof(Tree));
	t3 = (Tree*)malloc(sizeof(Tree));
	t1->data = 10;
	t1->left = t2;
	t1->right = t3;
	t2->data = 20;
	t2->left = NULL;
	t2->right = NULL;
	t3->data = 30;
	t3->left = NULL;
	t3->right = NULL;
	  
	printf("%d", Max_Depth(t1));
}