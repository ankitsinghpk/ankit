#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int a,rev,rem,x;
	scanf("%d",&a);
	x=a;
 while(x!=0)
 {
 
 rem=x%10;
 rev=rev*10+rem;
 x=x/10;
}
if(a==rev)
printf("yes");
else
printf("no");
	return 0;
}
