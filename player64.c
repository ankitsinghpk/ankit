 #include <stdio.h>

int main(void) {
	int n,i,j,a[20],k,temp;
	// your code goes here
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
		
		for(i=0;i<n;i++)
		{
			if(a[i]<k)
			printf("%d ",a[i]);
		}
	
	return 0;
}
