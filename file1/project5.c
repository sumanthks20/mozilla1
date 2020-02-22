 #include<stdio.h>
 /*main()
 {
 int a,b,c;
 printf("enter the values\n");
 scanf("%d%d%d",&a,&b,&c);
 2a>b?a>c?printf("%d is largest",a):printf("%d is largest",c):b>c?printf("%d is largest",b):printf("%d is largest",c);
 }*/
void main()
{
   int a,b,c;
    printf("enter the values\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("%d is largest,a");

    }
    if((b>a)&&(b>c))
       {
           printf("%d is largest",b);

       }
   if((c>a)&&(c>b))
    {
        printf("%d is largest",c);
    }
}
