/*#include<stdio.h>
void main()
{
 int i,j,r;
 scanf("%d",&r);
 for(i=0;i<r;i++)
 {

     for(j=i;j<r;j++)
     {

         printf("-");

     }
     for(j=0;j<(2*i)+1;j++)
     {
         printf("*");

     }
     for(j=i;j<r;j++)
     {

         printf("-");

     }
     printf("\n");


 }
}*/


#include<stdio.h>
void main()
{



    int i,j,r=5;
    char k='a';
    for(i=0;i<r;i++)
    {

        for(j=i;j<r;j++)
        {

            printf("*");

        }
        printf("\n");
    }
}
