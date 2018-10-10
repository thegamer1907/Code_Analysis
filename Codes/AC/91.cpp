#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 500005

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	ll cum[MAX] = {};
	for(int i=0;i<n;++i)
	{
		cin>>cum[i];
		if(i!=0)
			cum[i]+=cum[i-1];
	}
	
	if(cum[n-1]%3!=0)
	{
		cout<<0;
		return 0;
	}
    
	int seen = 0;
	ll ans = 0;
	for(int i=0;i<n-1;++i)
	{
		if(cum[i]==2*cum[n-1]/3)
			ans+=seen;
		if(cum[i]==cum[n-1]/3)
			++seen;
	}
	cout<<ans;
	return 0;
}