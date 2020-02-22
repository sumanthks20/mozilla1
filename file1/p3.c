#include<stdio.h>
#include<stdlib.h>
#define MS 5
typedef struct
{
int front,rear;
int item[MS];
}cqueue;
cqueue q;
void insert(int value)
{
if(q.front==(q.rear+1)%MS)
{
 printf("the q is full\n");
 display();
}
else
{
 q.rear=(q.rear+1)%MS;
 q.item[q.rear]=value;
}
}
void delete()
{
int value;
if(q.front==q.rear)
{
printf("q is empty\n");
}
else
{
q.front=(q.front+1)%MS;
value=q.item[q.front];
printf("deleted element is%d",value);
}
}
void display()
{
int i;
if(q.front==q.rear)
{
printf("q is empty\n");
}
else
{
if(q.front<q.rear)
{
for(i=q.front+1;i<=q.rear;i++)
{
printf("%d\n",q.item[i]);
}
}

else
{
if(q.front!=(MS+1));
{
for(i=0;i<=q.front;i++)
{
printf("%d\n",q.item[i]);
}
for(i=q.rear;i<=q.front;i++)
{
printf("%d\n",q.item[i]);
}
}
}
}
}

void main()
{
int ch,value;
while(1)
{
printf("1.insert\n2.delete\n3.display\n4.exit\n");
printf("enetr the choice");
scanf("%d\n",ch);
switch(ch)
{
case 1:scanf("%d",&value);
        insert(value);
        break;
case 2:delete();
        break;
case 3:display();
        break;
case 4: exit(0);
        break;
default:printf("invalid error\n");
}
}
}
