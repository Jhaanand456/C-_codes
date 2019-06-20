// program in c++ to find out prime numbers between 1 and N using sieve of eratosthenes .
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	bool arr[n+1]; // +1 because of 0 based indexing
	memset(arr,true,sizeof(arr));   // initializing all the array values as true
	j=sqrt(n);
	for(i=2;i<=j;i++)
	{
		if(arr[i])
		{
			k=i+i;
			while(k<=n)
			{
				if(arr[k])
				arr[k]=false;
				k+=i;
			}
		}
	}
	//-------------- now finally printing all prime numbers between 1 and N 
	for(i=2;i<=n;i++)
	{
		if(arr[i])
		cout<<i<<" ";
	}
	return 0;
}
