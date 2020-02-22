#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void toh(int n,char s,char t,char d);
void main()
{
int n;
char s,t,d;
printf("enter the number of disk\n");
scanf("%d",&n);
toh(n,s,t,d);
printf("the total number =%d\n",(int)pow(2,n)-1);
}
void toh(int n,char s,char t,char d)
{
if(n==0)
{
return;
}
toh(n-1,s,t,d);
printf("%dmove\t%c\t%c\n",n,s,d);
toh(n-1,t,s,d);
}
