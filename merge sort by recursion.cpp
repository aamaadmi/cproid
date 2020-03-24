//merge sort
#include<iostream>
using namespace std;
int merge(int *a,int l,int mid,int h)
{
	int i=l,j=mid+1,k=0;
	int v[h-l+1];
	while(i<=mid && j<=h)
	{
		if(a[i]<a[j])
		{
			v[k++]=a[i++];
		}
		else
		v[k++]=a[j++];
	}
	while(i<=mid)
	{
		v[k++]=a[i++];
	}
	while(j<=h)
	{
		v[k++]=a[j++];
	}
	k=0;
	for(i=l;i<h+1;i++)
	{
		a[i]=v[k++];
	}
		cout<<endl;
		for(int i=l;i<h+1;i++)
	cout<<a[i]<<" ";
}
int mergesort(int *a,int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	cout<<endl;
		for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}
