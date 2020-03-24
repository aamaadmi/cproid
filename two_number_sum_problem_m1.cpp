#include<iostream>
#include<vector>
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
	auto t1=v.begin();
	for(;t1<v.end()-1;t1++)
	for(auto t2=t1+1;t2<v.end();t2++)
	if(*t1+*t2==k)
	{
		cout<<*t1<<" "<<*t2;
		return 0;
	}
	cout<<"not found";
	return 0;
}
