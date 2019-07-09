#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	char str[20];
	int l,i;
	fgets(str, sizeof str, stdin);
	l=strlen(str);
	for(i=l;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
