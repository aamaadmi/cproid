#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
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
		v[i]=n-i;
	}
	sort(v.begin(),v.end());
	auto it1=v.begin();
	auto it2=v.end()-1;
	while(it1<it2)
	{
		if(*it1+*it2==k)
		{
			cout<<*it1<<" "<<*it2<<endl;
			return 0;
		}
		else if(*it1+*it2<k)
		{
			it1++;
		}
		else 
		it2--;
	}
	cout<<"not found";
	return 0;
	
}
