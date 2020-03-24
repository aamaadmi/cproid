#include<iostream>
#include<map>
#include<vector>
using namespace std;
map <long long,long long> m;
long long getNthFib(long long n)
{
	vector <long long> v={0,1};
	long long  count=2;
	long long intermediate;
	if(n==1)
	return v[0];
	else if(n==2)
	return v[1];
	else
	{
		while(count<n)
	{
		intermediate=v[0]+v[1];
		v[0]=v[1];
		v[1]=intermediate;
		count++;
	}
	return v[1];
	}
}
int main()
{
	long long n;
	cin>>n;
	m.insert(make_pair(1,0));
m.insert(make_pair(2,1));
	//for(long long i=1;i<=n;i++)
	cout<<getNthFib(n)<<"\n";
}
