//#include"stdio.h"
//void main()
/*{
if(printf("sumanth"))
{

}
}*/


/*{
int y;
printf("enter the year\n" );
scanf("%d",&y);
if((y%400==0)||((y%4==0)&&(y%100!=0)))
{
    printf("is a leap year");
}
else
{
    printf("not a leap year");
}
}
*/



/*
{
int d,year,month;
printf("enter the no.days\n ");
scanf("%d",&d);
year=d/365;
month=(d%365)/30;
printf("no.of year=%d\n",year);
printf("month is=%d",month);
}
*/

/*
{
    int a,b;
    printf("enter the value \n");
    scanf("%d%d",&a,&b);
    if(a^b)
    {
        printf("both the numbers are equal");
    }
    else
        {
         printf("numbers are not equal");
        }
}
*/
/*{
 int a,b,c;
 float d;
 printf("enter the values of a &b\n");
 scanf("%d%d",&a,&b);
 c=a/b;
 d=a/b;
 printf("%d",c);
 printf("%f",d);
}
*/

/*
{

    int n1,n2;
    printf("enter the values");
    scanf("%d%d",&n1,&n2);
    printf("************ arithmathic operator*************\n");
    printf("%d+%d=%d\n",n1,n2,(n1+n2));
    printf("%d-%d=%d\n",n1,n2,(n1-n2));
    printf("%d/%d=%d\n",n1,n2,(n1/n2));
    printf("%d%%d=%d\n",n1,n2,(n1%n2));
    printf("%d*%d=%d\n",n1,n2,(n1*n2));
    printf("%d<<%d=%d\n",n1,n2,(n1<<n2));
    printf("%d>>%d=%d\n",n1,n2,(n1>>n2));
    printf("%d&&%d=%d\n",n1,n2,(n1&&n2));
    printf("%d||%d=%d\n",n1,n2,(n1||n2));
    printf("%d^%d=%d\n",n1,n2,(n1^n2));
    printf("%d&%d=%d\n",n1,n2,(n1&n2));
    printf("%d<=%d=%d\n",n1,n2,(n1<=n2));
    printf("%d>=%d=%d\n",n1,n2,(n1>=n2));
    printf("%d%%d=%2d\n",n1,n2,(n1%n2));
    printf("~%d=%d\n",n2,(~n2));
    printf("~%d=%d\n",n2,(~n2+1));
}
*/
#include<stdio.h>

int prime(int num); //Function to find whether the number is prime or not.
int main() {
   int lines;
   scanf("%d", &lines); //Number of lines of the triangle is taken from test data.
int i, j, count=2;
    for (i = 1; i <= lines; i++) {
      for (j = 1; j <= i; j++) {
        while(!prime(count)){
            count++;
 }
        printf("%d ", count);
        count++;
      }
      printf("\n");
   }
   return(0);
}

int prime(int num) {
   int i, prime = 1;
   for (i = 2; i <= (num/2); i++) {
      if (num % i == 0){
        prime = 0;
         break;
      }
   }
   if (prime==1 || num==2)
      return 1;
   else
      return 0;
}
