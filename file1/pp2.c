#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct bst
{
int data;
struct bst *ic,rc;
};
typedef struct bst node
void *create(node *root,int a)
{
node *temp;
if(root ==null)
{
temp=(node*)malloc(sizeof(node));
root=temp;
temp->data=a;
temp->rc=temp->=null;
return root;
}
else if(a<root->data)
{
root->ic=create(root->ic,a);
}
else if(a>root->data)
{
root->ic=create(root->ic ,a);
}
else if(a>root->data)
{
root->rc=create(root->rc,a);
}
else
{
return root;
}
}
void search(node *root,int k)
{
if(root==null)
printf("key is not found\n");
else if(k<root->data)
{
search(root->ic,k);
}
else if(k>root->data)
{
search(root->,k);
}
else
{
printf("key is found\n");
}
}
void preorder(node *root)
{
if(root!=null)
{
printf("%d\t",root->data);
preorder(root->ic);
postorder(root->rc);
}
}
void postorder(node *root)
{
if(root!=null)
{
postorder(root->ic);
postorder(root->rc);
printf("%d\t",root->data);
}
}
void inorder(node *root)
{
if(root!=null)
{
inorder(root->ic);
printf("%d\t",root->data);
inorder(root->rc);
}
}
void transverse
