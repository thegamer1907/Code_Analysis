#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
	long i,j,k,l,m,n;
	long ara[1009];
	while(cin>>n)
	{
		cin>>m;
		
		k=0;
		long mx=0;
		for(i=0;i<n;i++)
		{
			cin>>ara[i];
			if(ara[i]>mx)
			mx=ara[i];
			
			k+=ara[i];
		}
		
		j=k+m;
		long mn=j/n;
		if(mn>=mx && j%n!=0)
		mn++;
		else if(mn<mx)
		mn=mx;
		
		cout<<mn<<" "<<mx+m<<endl;
		
	}
	return 0;
}