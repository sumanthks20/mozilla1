//#include<stdio.h>
//void main()
/*{
   int a,b,c;
    printf("enter the values\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("%d is largest,a");

    }
    else if((b>a)&&(b>c))
       {
           printf("%d is largest",b);

       }
   else
    {
        printf("%d is largest",c);
    }
}*/
 /*main()
 {
 int a,b,c;
 printf("enter the values\n");
 scanf("%d%d%d",&a,&b,&c);
 2a>b?a>c?printf("%d is largest",a):printf("%d is largest",c):b>c?printf("%d is largest",b):printf("%d is largest",c);
 }*/
/*void main()
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
}*/
/*
void main()
{
 int a,b,c;
 printf("enter the values\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
 if(a>c)
 {
 printf("%d is largest",a);
 }
 else
 {
 printf("%d is largest",c);
 }
 }
 else
 {
 if(b>c)
 {
 printf("%d is largest",b);
 }
 else
 {
 printf("%d is largest",c);
 }
 }
 }*/
#include <stdio.h>
#include <string.h>

void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;

    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}

void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}
