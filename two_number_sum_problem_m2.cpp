#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ll n,k;
	cin>>n>>k;
	int i,j;
	vector <int> v(n);
	for(i=0;i<n;i++)
	{
		v[i]=i+1;
	}
	map <int,bool> m;
	pair <int,bool> p;
	int potential;
	for(int i=0;i<n;i++)
	{
		potential=k-v[i];
		if(m[potential])
		{
			cout<<potential<<" "<<v[i];
			return 0;
		}
		else
		{
			p.first=v[i];
			p.second=true;
			m.insert(p);
		}
	}
	cout<<"not found";
	
}
