#include<stdio.h>
void main ()
{
int a[1000],i,r,t,n,m;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the array please\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the positon of an element which u want to delete\n\n");
scanf("%d",&r);
printf("\n");
for(i=r;i<n-1;i++)
{
 t=a[r];
a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
printf("array after deleting first element");
for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
printf("array after deleting last element");
for(i=0;i<n-2;i++)
{
 printf("%d\n",a[i]);
}
}