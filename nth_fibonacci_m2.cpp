#include<iostream>
#include<map>
using namespace std;
map <long long,long long> m;
long long getNthFib(long long n)
{
	if(m.find(n)!=m.end())
	return m[n];
	else
	{
		m.insert(pair<long long,long long>(m.size()+1,getNthFib(n-1)+getNthFib(n-2)));
		return m[n];
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
