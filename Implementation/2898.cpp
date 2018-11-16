
 #pragma GCC optimize("O3")
#pragma loop_opt(on)
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define debug(a) cout << #a << " = " << a << endl;
#define REP(i,j,k) for(int i = j; i < k; i++)
#define pb emplace_back
#define pi pair<int,int>
using namespace std;
signed main()
{
	int n;
	cin >> n;
	vector<int> a(n),b;
	REP(i,0,n) cin >> a[i];
	b = a; sort(b.begin(),b.end());
	int ans = 0;
	bool f = 0;
	REP(i,0,n) if(a[i] == b[n-1])
	{
		if(a[0] == b[n-1]) break;
		for(int j = i; j >= 1; --j)
		{
			++ans;
			swap(a[j],a[j-1]);
			f = 1;
		}
		if(f) break;
	}
	bool ok = 0;
	for(int i = n-1; i >= 0 && !ok; --i) if(a[i] == b[0])
	{
		if(a[n-1] == b[0]) break;
		for(int j = i; j < n-1; ++j)
		{
			++ans;
			ok = 1;
		}
	}
	cout << ans;
}