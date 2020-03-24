// heapify an array
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
	if(2*t+1<n)
{
		int y=2*t+1;
		if(2*t+2<n)
{
		(a[2*t+2]>a[2*t+1])?y=2*t+2:y=2*t+1;
}
	if(a[t]<a[y])
	{
		swap(a+t,a+y);
		heapify(a,y,n);
	}
}
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
//	for(int i=0;i<n;i++)
//	cin>>a[i];
int n=10;
	for(int i=0;i<n;i++)
	{
		heapify(a,n-i-1,n);
		cout<<"\n";
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	}
		cout<<"\n";
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
