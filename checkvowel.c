  #include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str;
scanf("%c",&str);
if((str>='a'&&str<='z')||(str>='A'&&str<='Z'))
{
if((str='a'||str=='i'||str=='e'||str=='o'||str=='u')||(str=='A'||str=='E'||str=='I'||str=='O'||str=='U'))
printf("Vowel");
else
printf("Consonant");
}
else
printf("invalid");
return 0;
}
