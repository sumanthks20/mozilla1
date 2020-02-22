#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a[100000],i,n,b[1000000],d;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=n-1,d=0;i>=0;i--,d++)
 {
     b[d]=a[i];
 }
 for(i=0;i<n;i++)
 {
     a[i]=a[n];
 }
 for(i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

