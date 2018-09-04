#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll arr[100005];

ll findSum(int k,int n)
{
	ll s = 0;
	ll temp[n];
	for (ll i = 0;i<n;i++) temp[i] = arr[i] + ( (i+1)*k );
	sort(temp,temp+n);
	for (int i = 0;i<k;i++) s += temp[i];
	return s;
}

bool func(ll sum,int k,int n)
{
	return findSum(k,n) <= sum;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	ll s; cin>>s;
	for (int i = 0;i<n;i++) cin>>arr[i];

	int k; ll ans = 0;
	int lo = 0,hi = n;
	while (lo <= hi)
	{
		int mid = (hi + lo)/2;
		if(func(s,mid,n)) 
		{
			k = mid; lo = mid + 1;
		}
		else hi = mid - 1;
	}
	ans = findSum(k,n);
		cout<<k<<" "<<ans;
	return 0;
}