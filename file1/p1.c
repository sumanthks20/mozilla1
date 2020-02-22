#include<stdio.h>
#include<stdlib.h>
#define M 5
typedef struct
{
int front, rear;
int item[M];
}cque;
cque cq;
void cqins(int val)
{
if(cq.front==(cq.rear+1)%M)
{
printf("circ q is full");
display();
}
else
{
cq.rear=(cq.rear+1)%M;
cq.item[cq.rear]=val;
}
}
void cqdel()
{
int val;
if(cq.front==cq.rear)
{
printf("empty");
}
else
{
cq.front=(cq.front+1)%M;
val=cq.item[cq.front];
printf("detet element is %d\n",val);
}
}
void display()
{
int i;
if(cq.front==cq.rear)
{
printf("empty");
}
else
{
if(cq.front<cq.rear)
{
for(i=cq.front+1;i<=cq.rear;i++)
{
printf("%d",cq.item[i]);
}
}
else
{
if(cq.front!=(M-1))
{
for(i=cq.front+1;i<=(M-1);i++)
{
printf("%d\t",cq.item[i]);
}
for(i=0;i<=cq.rear;i++)
{
printf("%d\t",cq.item[i]);
}
}
}
}
}
void main()
{
cq.rear=M-1;
cq.front=M-1;
int ch,val;
while(1)
{
printf("***menu****");
printf("1.cqins\n2.cqdel\n3.display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: scanf("%d",val);
        cqins(val);
        break;
case 2:cqdel();
        break;
case 3:display();
        break;
case 4:exit(0);
default:printf("invalid");
}
}
}
