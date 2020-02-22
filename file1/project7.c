#include<stdio.h>
int main()
/*{
int i,j,r=4,c=4;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("*\t");
}
printf("\n");
}
}
*/

/*
{
int i,j,r=4,c;
for(i=0;i<r;i++)
{
for(j=0;j<=i;j++)
{
printf("*\t");
}
printf("\n");
}
}
*/

/*
{
int i,j,r=4;
for(i=0;i<r;i++)
{
for(j=0;j<=i;j++)
{
printf("%d\t",i+1);
}
printf("\n");
}
}
*/

/*
{
int i,j,r=4,c=4;
for(i=0;i<r;i++)
{
for(j=0;j<c+i;j++)
{
printf("%d\t",i*i);
}
printf("\n");
}
}
*/

/*
{
int i,j,r=5,k;
printf("enter the value of k");
scanf("%d",&k);
for(i=0;i<r;i++)
{
for(j=0;j<=i;j++)
{
printf("%d\t",k);
k++;
}
printf("\n");
}
}
*/


/*
{
int i,j,r;
printf("enter the number of rows\n");
scanf("%d",&r);
for(i=0;i<=r;i++)
{

    for(j=0;j<=r-1;j++)
    {

     printf("  ");


    }
    for(j=0;j<=r;j++)
    {
       printf("*");
    }
printf("\n\t");
}
return 0;
}
*/


/*
{

    int n,c,k,s=1;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    s=n-1;
    for(k=1;k<=n;k++)
    {
        for(c=1;c<=s;c++)
        {
            printf(" ");

        }
        s--;
        for(c=1;c<=2*k-1;c++)
        {
            printf("*");

        }
        printf("\n");
    }
    s=1;
    for(k=1;k<=n-1;k++)
    {

        for(c=1;c<=s;c++)
        {
            printf(" ");
        }
        s++;
        for(c=1;c<=2*(n-k)-1;c++)
        {
            printf("*");

        }
        printf("\n");

    }

}
*/

{


short int integertype;
float floattype;
double doubletype;
char chartype;
printf("size of int:%ld bytes\n",sizeof(integertype));
printf("size of float:%d bytes\n",sizeof(floattype));
printf("size of double:%d bytes\n",sizeof(doubletype));
printf("size of char:%d bytes\n",sizeof(chartype));

}
