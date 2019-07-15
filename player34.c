#include <stdio.h>
#include<string.h>

int main(void) {
	char a[20];
	int l,i;
	// your code goes here
	 fgets(a,sizeof a,stdin);
	 l=strlen(a);
	 while(i<l){
	 printf("%c",a[i]);
	 i=i+3;
	 }
	return 0;
}
