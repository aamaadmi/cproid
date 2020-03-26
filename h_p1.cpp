#include<iostream>
#define ll long long 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		n=n-1;
		ll a=n/3;
		ll b=n/5;
		ll c=n/15;
		a=a*(a+1)*3;
		b=b*(b+1)*5;
		c=c*(c+1)*15;
		cout<<(a+b-c)/2<<endl;
	}

}
