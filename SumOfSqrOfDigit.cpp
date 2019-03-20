#include<iostream>
using namespace std;
int main()
{
int rem,sum,n;
cin>>n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem;
n=n/10;
}
cout<<sum;
return 0;
}
