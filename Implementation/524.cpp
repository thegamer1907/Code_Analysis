#include <bits/stdc++.h>
using namespace std;
int i,j;
int main()
{
	int n,k;
	cin>>n>>k;
	int scores[n];
	for(i=0; i<n; i++)
	{
		cin>>scores[i];
	}
	int ref = scores[k-1];
	i=0;
	int c=0;
	while(scores[i]>=ref && i<n && scores[i]>0)
	{
		i++;
		c++;
	}
	cout<<c;
	return 0;
}
	


