#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n,m;
	cin>>n>>m;
	ll ar[n];
	for(int x=0;x<n;x++)
	{
		cin>>ar[x];
	}
	ll b[n]={0};
	ll s[100001]={0};
	b[n-1]=1;
	s[ar[n-1]]++;
	for(int x=n-2;x>=0;x--)
	{
		if(s[ar[x]]==0)
		{
			b[x]=b[x+1]+1;
			s[ar[x]]+=1;
		}
		else
		{
			b[x]=b[x+1];
		}
	}
	for(int x=0;x<m;x++)
	{
		int r;
		cin>>r;
		cout<<b[r-1]<<endl;
	}
	return 0;
}