#include <stdio.h>
#include<string.h>

int main(void) {
	
	int k,n,rem,count=0;
	// your code goes here
	 scanf("%d",&n);
	 scanf("%d",&k);
	 while(n!=0){
	 rem=n%10;
	 if(rem==k)
	 count++;
	 n=n/10;
	 }
	 printf("%d",count);
	return 0;
}
