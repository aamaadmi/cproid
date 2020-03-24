// binary search by loop
#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int *a,int key,int n)
{
		int l=0,h=n-1;
		while(l<=h)
		{
			int mid=(l+h)/2;
			if(a[mid]==key)
			return true;
			else if(a[mid]<key)
			l=mid+1;
			else
			h=mid-1;
		}
		return false;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<binarysearch(a,key,n);
}
