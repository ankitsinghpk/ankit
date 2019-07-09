 #include<stdio.h>
 int main()
 {
 	int n,a,d,sum=0;
 	scanf("%d%d%d",&n,&a,&d);
 	sum=n/2*(2*a+(n-1)*d);
 	printf("%d",sum);
 	return 0;
 }
