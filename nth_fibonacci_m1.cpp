#include<bits/stdc++.h>
using namespace std;
long long getNthFib(long long n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return getNthFib(n-1)+getNthFib(n-2);
}
int main()
{
	long long n;
	cin>>n;
	//for(long long i=1;i<n;i++)
	cout<<getNthFib(n)<<"\n";
}
