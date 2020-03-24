// C++ program to print all primes smaller than or equal to 
// n using Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;
void sieveOfEratosthenes(int n)
{
	
	bool primes[n+1];
	memset(primes,true,sizeof(primes));
	for(int i=2;i*i<=n;i++)
	{
		if(primes[i])
		{
			for(int p=i*i;p<=n;p=p+i)
			{
				primes[p]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	if(primes[i])
	cout<<i<<"\n";
}
int main()
{
	int n;
	cin>>n;
	sieveOfEratosthenes(n);
	return 0;
}
