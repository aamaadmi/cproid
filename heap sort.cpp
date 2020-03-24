#include<iostream>
using namespace std;
swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int heapify(int *a,int t,int n)
{
	if(2*t+2<n)
{
		int y;
	(a[2*t+2]>a[2*t+1])?y=2*t+2:y=2*t+1;
	if(a[t]<a[y])
	{
		swap(a+t,a+y);
		heapify(a,y,n);
	}
}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		heapify(a,n-i-1,n);
		cout<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	}
	
}
