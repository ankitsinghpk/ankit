#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	char str[20];
	int l,i,flag=0;
	fgets(str, sizeof str, stdin);
	l=strlen(str);
	for(i=0;i<=l;i++)
	{
		if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
		flag=1;
	}
	if(flag==1)
	printf("no");
	else
		printf("yes");
	return 0;
}
