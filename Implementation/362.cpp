#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;	cin>>n>>k;
	int a[n],sum=0;
	for(int i=1;i<=n;i++)	cin>>a[i];
	if(a[k]>0)
	{
		sum=k;
		int i=k+1;
		while(a[i]==a[k] && i<=n)
		{
			sum++;	i++;
		}
	}
	else
	{
		for(int i=1;i<=k;i++)
			if(a[i]>0)
				sum++;
	}
	cout<<sum;
    return 0;
}