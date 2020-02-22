/*#include<stdio.h>
int main()
{
/*int a=4,b=15,c=9;
if(c>b>a)
    printf("true");
else
    printf("false");*/


   /* int a=10,b=3,c=2,d=4,res;
    res=a+a*-b/c%d+c*d;
    printf("%d",res);
*/
/*int a=0,b=1,c=1;
if(a)
    printf("iitkpg\n");
if(b)
    printf("iitm\n");
if(c)
    printf("iitr\n");

return 0;
}*/


/*#include<stdio.h>
int main()
{

    int n,i,j,a[2][2]={{(1,1),(0,1)},{(1,0),(1,1)}};
    printf("enter the order of matrix\n");
    scanf("%d",&n)
    printf("enter the elements of matrix");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            scanf("%d",a[i]);
        }
    }

}*/

/*
#include<stdio.h>
int main()
{
    int n=2,flag,i,j;
    int a[2][2]={{1,1},{0,1}};
    for(i=0;i<n;i++)
    {

        for(j=0;j<i;j++)
        {

            if(a[i][j]!=0)
            {
                flag=0;
            }
            else
            {
               flag=1;
            }

        }
    }
    if(flag==1)
    {
        printf("yes");

    }
    else
        {
        printf("no");
        }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,j,n=2,up=1,lr=1,a;
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {

    for(j=0;j<n;j++)
    {

        scanf("%d",&a);
        if(j>i&&a!=0)
        {

            up=0;
        }
        if(j<i&&a!=0)
        {
            lr=0;
        }
    }
    }

    if(up==1||lr==1)
    {

        printf("yes");

    }
    else
    {
        printf("no");
    }
return 0;
}

