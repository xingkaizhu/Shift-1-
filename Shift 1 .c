#include <stdio.h>
int main()
{   int m,i,j,k;
int a[10],b[10];
scanf("%d",&m);
for(i=0;i<10;i++)
scanf("%d",&a[i]);
k=m%10;
if(k==0)
{for(j=0;j<10;j++)
printf("%d ",a[j]);
}
else 
{
for(i=0;i<k;i++)
b[10-k+i]=a[i];
for(i=k;i<10;i++)
b[i-2]=a[i];
for(j=0;j<10;j++)
printf("%d ",b[j]);
}
return 0;
}
