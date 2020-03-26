#include<iostream>
#define bada long long
using namespace std;
void largest_prime_factor(bada n)
{
	bada prime;
	while(n%2==0)
	n=n/2;
	if(n==1)
	prime=2;
	for(bada int i=3;i*i<=n;i=i+2)
	{
		if(n%i==0)
		prime=i;
		while(n%i==0)
		{
			n=n/i;
		}
	}
	if(n!=1)
	cout<<n;
	else
	cout<<prime;
	cout<<endl;
	return;
}
int main()
{
	bada t;
	cin>>t;
	for(bada i=0;i<t;i++)
	{
		bada n;
		cin>>n;
		largest_prime_factor(n);
	}
}
