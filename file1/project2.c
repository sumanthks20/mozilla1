#include<stdio.h>
void main()
{
char ch,a,z;
printf("enter the character\n");
scanf("%c",&ch);
if(ch>a&&ch<z)
{

    ch=ch-(32);

}

printf("ASCII value of %c is %d",ch,ch);
}



/*
#include<stdio.h>
void main()
{
int a;
printf("enter the value of a\n");
scanf("%d",&a);
printf("octal=%o",a);
printf("\n");
printf("hexa=%0x",a);
}

*/

/*
#include<stdio.h>
int main()
{
printf("\t\t\bhello\n\t\b\eworld");
return(0);
}

*/

/*
#include"stdio.h"
void main()
{
int a;
printf("enter the value of a\n");
scanf("%d",&a);
printf("%b",a);
}

*/

/*
#include<stdio.h>
void main()
{
int sub1,sub2,sub3,percent;
printf("enter the values\n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
percent=(sub1+sub2+sub3)/3;
printf("%d",percent);
printf("%%",percent);
}

*/


/*
#include"stdio.h"
void main()
{
int a=12;
printf("\(printf("\%07d\",a)\;)\"");
printf("%7d",a);
}
*/

/*
#include<stdio.h>
int main()
{
    int a=12;
printf("printf(\"%(07)d\",a)\;");
printf("%+3.5d",a);
return 0;
}
*/
