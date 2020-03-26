#include<bits/stdc++.h>

using namespace std;
int pali(int n)
{
	int rev=0;
	for(int i=0;n!=0;i++)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
int main()
{
	set <int> s;
	for(int i=999;i>=100;i--)
	{
		for(int j=i;j>=100;j--)
		{
			
			if(j*i>=101101 && pali(i*j)==i*j)
			s.insert(i*j);
		}
	}
		vector <int> v(s.begin(),s.end());
//		for(int i=0;i<v.size();i++)
//	cout<<v[i]<<endl;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;cin>>n;
		for(int j=v.size()-1;j>=0;j--)
		{
			if(v[j]<n)
			{
				cout<<v[j]<<endl;
				break;
				
			}
		}
		
	}
}
