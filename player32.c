#include <stdio.h>

int main(void) {
	// your code goes here
	int n,k,a[100],i,flag=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		flag=1;
	}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
