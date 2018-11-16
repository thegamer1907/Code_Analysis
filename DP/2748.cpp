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
signed main()
{
	int n;
	cin >> n;
	vector<int> a;
	a.pb(1), a.pb(5), a.pb(10);
	a.pb(20), a.pb(100);
	int cnt = 0;
	reverse(all(a));
	for(auto i:a) 
	{
		cnt += n/i;
		n %= i;
	}
	cout << cnt;
}