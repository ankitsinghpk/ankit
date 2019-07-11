 #include<stdio.h>
int main()
{
		int n,a[100],i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			if((i%2==0 && a[i]%2==1)||(i%2==1&&a[i]%2==0))
			{
			
			printf("%d",a[i]);
			printf(" ");
		}
		}
		return 0;
	
}
