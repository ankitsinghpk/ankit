  #include<stdio.h>
#include<math.h>
int main()
{
  int x,y,c,gcd;
  scanf("%d %d",&x,&y);
  for(c=1;c<=x &&c<=y;c++)
  {
  	if(x%c==0 && y%c==0)
  	gcd=c;
  }
  printf("%d",gcd);
  return 0;
}
