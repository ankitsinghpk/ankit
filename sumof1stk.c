#include <stdio.h>
int main()
{
int a[20],n,i,sum,k;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",a[i]);
for(i=0;i<k;i++)
sum=sum+a[i];
printf("%d",sum);
return 0;
}
