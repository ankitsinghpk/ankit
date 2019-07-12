#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int a,count=0;
	scanf("%d",&a);
 while(a!=0)
 {
 
 a=a/10;
 count++;
}
printf("%d",count);
	return 0;
}
