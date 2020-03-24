// binary search by recursion
#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int *a,int key,int l,int h)
{
		if(l<h)
		{
			int mid=(l+h)/2;
			if(a[mid]==key)
			return true;
			else if(a[mid]<key)
			return binarysearch(a,key,mid+1,h);
			else
			return binarysearch(a,key,l,mid-1);
		}
		else
		{
			if(l==h)
			if(a[l]==key)
			return true;
			else
			return false;
		}
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
	cout<<binarysearch(a,key,0,n);
}
