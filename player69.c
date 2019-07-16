 #include <stdio.h>

int main(void) {
	int n,i,a[20],k;
	// your code goes here
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-k;i++)
	{
		
		printf("%d ",a[i]);
	}
	return 0;
}
