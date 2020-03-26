#include<iostream>
#define l long long
using namespace std;
int main()
{
	l t;
	cin>>t;
	for(l i=0;i<t;i++)
	{
		l a=2,b=8,c=0;
		l n;
		cin>>n;
		if(n<=7)
		cout<<2<<endl;
		else if(n==8)
		cout<<10<<endl;
	else
	{
		l sum=10;
		
			while(1)
		{
			c=4*b+a;
			a=b;
			b=c;
			if(c<=n)
			sum=sum+b;	
			else
			break;
		}
		cout<<sum<<endl;
	}
	}
}
