  #include <stdio.h>

int main(void) {
	int i,n,flag=0;
	// your code goes here
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		continue;
		else
		break;
	}
	if(i==n-1)
	printf("yes");
	else
	printf("no");
	return 0;
}
