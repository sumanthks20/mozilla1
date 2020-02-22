#include<stdio.h>
#include<math.h>
int main()
/*{
int x,y,z,sum,i;
for(i=0;i<=9;i++)
{
 x=i*i;
}
y=x/10;
z=x%10;
sum=y+z;
printf("sum of the number is=%d\n",sum);
if(sum==i)
{
printf("the number is a neon\n");
}
else
{
printf("the number is not a neon");
}
i
return 0;
}
*/
/*
{


int n,s,sum=0;
printf("enter the number \n");
scanf("%d",&n);
s=n*n;
while(s!=0)
    {

        sum=sum+s%10;
        s=s/10;

    }
    if(sum==n)
    {

        printf("%dis a neon number",n);

    }
    else
    {
     printf("% is not a neon number",n);
    }
}
*/

{


int i,fact=0,n;
printf("enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{

    fact=fact+i;

}
if(fact==n)
{

    printf("%d the number is a perfect number",n);

}
else
{

    printf("%d the number is not a perfect number ",n);
}
}




/*
{
    int n,prime=0,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {

        if((n%i)==0)
        {
            prime=1;
        }
    }
 if(prime==1)
  {
    printf("%d is not a prime  number",n);

  }
 else
  {
    printf("%d is a   prime number ",n) ;
  }

}
*/

/*
{
    int n,s,r,sum=0,i;
    printf("enter the num\n");
    scanf("%d",&n);
    s=n*n;
    for(i=0;i<=1000;i++)
    {


    while(s!=0)
    {
        sum=sum+(s%10);
        s=s/10;
    }
    if(n==sum)
    {
        printf("the num is neon number\n");
    }
    else
    {
        printf("the number is not neon num");
    }
    }
}
*/



/*{
    int n,r,t,sum=0;
    printf("enter the num\n");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(t==sum)
    {
        printf("%d is amstong number\n",t);
    }
    else
    {
        printf("the number is not amstrong num");
    }
}*/

/*{
    int i;
    for(i=0;i<100;i++);
    {
        printf("hello");
    }
    return 0;
}*/




/*{

    int n,a,d1,d2,d3,d4;
    printf("print all the nos between 1to 10000:\n");
    n=0001;
    while(n<=10000)
    {

        d1=n-((n/10)*10);
        d2=(n/10)-((n/100)*10);
        d3=(n/100)-((n/1000)*10);
        d4=(n/1000)-((n/10000)*10);
        a=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3)+(d4*d4*d4);
        if(a==n)
        {

            printf("\n armstrong no is=%d",a);
        }
        n++;
     }

}*/



    /*{

        int n,m,i,r,j,sum;
        printf("enter the range values(m<n)\n");;
        scanf("%d%d",&m,&n);
        printf("neon numbers from%d to%d are::\n",m,n);
        for(i=m;i<=n;i++)
        {

            sum=0;
            r=i*i;
            for(j=r;j>0;j++)
            {
                sum+=(j%10);

            }
            if(sum==i)
                printf("%d \t",i);

        }

    return 0;
    }*/





/*{



int n1,n2,gcd,lcm,dem,num ,rem;
printf("enter the numbers\n");
scanf("%d%d",&n1,&n2);
if(n1>=n2)
{
    num=n1;
    dem=n2;
}
if(n2>n1)
{
    num=n2;
    dem=n1;
}
rem=num%dem;
while(num!=0)
{
    num=dem;
    dem=rem;
   // rem=(num+dem)/rem;
    break;

}
gcd=dem;
lcm=(num+dem)/rem;
printf("%d is a gcd\n",gcd);
printf("%d is a lcm\n",lcm);

}
*/
/*

{

    int n,a,d1,d2,d3,d4;
    printf("print all the nos between 1to 10000:\n");
    n=0001;
    while(n<=10000)
    {

        d1=n-((n/10)*10);
        d2=(n/10)-((n/100)*10);
        d3=(n/100)-((n/1000)*10);
        d4=(n/1000)-((n/10000)*10);
        a=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3)+(d4*d4*d4);
        if(a==n)
        {

            printf("\n armstrong no is=%d",a);
        }
        n++;
     }

}*/
