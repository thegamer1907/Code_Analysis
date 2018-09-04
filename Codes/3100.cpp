#pragma GCC optimize("O3")
#pragma loop_opt(on)
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define REP(i,j,k) for(int i = j; i < k; ++i)
#define pb emplace_back
#define all(v) (v).begin(),(v).end()
using namespace std;
int n;
vector<int> a;
signed main()
{IOS
	cin >> n;
	a.resize(n);
	REP(i,0,n) cin >> a[i];
	REP(i,0,n)
	{
		int res = ceil((double)(a[i]-i)/(double)n);
		res = max(res,0ll);
		a[i] = res*n+i;
	}
	int mi = 1e18, p = 0;
	REP(i,0,n)
	{
		if(a[i] < mi)
		{
			mi = a[i];
			p = i;
		}
	}
	cout << p+1;
}