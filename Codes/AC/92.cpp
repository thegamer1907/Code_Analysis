#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 500050

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int a[MAX];
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>a[i];

	ll lef[MAX];
	lef[0] = a[0];
	for(int i=1;i<n;++i)
		lef[i] += lef[i-1];

	map<int,set<int> > lookup;
	ll tot=a[n-1];
	set<int> tmp;
	tmp.insert(n-1);
	lookup[tot] = tmp;

	for(int i=n-2;i>=0;--i)
	{
		tot += a[i];
		if(lookup.find(tot)==lookup.end())
			lookup[tot] = set<int>();
		lookup[tot].insert(i);
	}

	ll ans = 0;
	ll cum = 0;
	for(int i=0;i<n;++i)
	{
		lookup[tot-cum].erase(i);
		cum += a[i];
		ll rem = tot-cum;
		if(rem%2 || rem!=2*cum)
			continue;
		ans+=lookup[rem/2].size();
		if(lookup[rem/2].find(i+1)!=lookup[rem/2].end())
			ans-=1;
	}

	cout<<ans;
	return 0;
}