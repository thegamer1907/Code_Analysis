#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,j,k;
	for(i=0;i<n;i++)
		cin>>a[i];
	int one,zero;
	int flip;
	int maxi=-1;
	int total=0;
	for(i=0;i<n;i++)
		if(a[i]==1)
			total++;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			one=0;
			zero=0;
			for(k=i;k<=j;k++)
			{
				if(a[k]==0)
					zero++;
				else
					one++;
			}
			if(zero>one)
			{
				flip=zero-one;
				maxi=max(maxi,total+flip);
			}
			else
			{
				flip=one-zero;
				maxi = max(maxi,total-flip);
			}
		}
	}
	cout<<maxi<<endl;
	return 0;
}