#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
if((a==b)||(a==c)||(b==c))
{
  printf("Equilateral Triangle");

}
if((a==(b+c))||(b==(a+c))||(c==(a+b)))
{
  printf("Triangle is not possible");

}
if(((a*a)==((b*b)+(c*c)))||((b*b)==((a*a)+(c*c)))||((c*c)==((a*a)+(b*b))))
{
  printf("Right-angle Triangle");
}
 if(a==b)
{
    if((a!=c)&&(b!=c))
  printf("Isosceles Triangle");

}
if((a!=b)&&(b!=c)&&(c!=a))
{
  printf("Scalene Triangle");

}
}

