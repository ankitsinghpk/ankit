 #include <stdio.h>
#include<string.h>

int main(void) { 
int i,n,flag=0;
	// your code goes here
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		flag=1;
	}
	if(flag==1)
	printf("yes");
	else
	printf("no");
	return 0;
}
