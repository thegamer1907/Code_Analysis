#include<iostream>
#include<vector>
#define int         int64_t
#define loop(i, a, n) for (int i = a; i < int(n); ++i)
#define loop_rev(i, n, a) for (int i = int(n) - 1; i >= int(a); --i)
#define pb          push_back
#define vi          vector< int>
using namespace std;
int sum = 0;
int n, m;
vi d, a;
bool valid(int k)
{
	vi check(m+1,0);
	vi pri;
	loop_rev(i, k+1, 0)
	{
		if (d[i] != 0 && check[d[i]] == 0)pri.pb(a[d[i]]+1),check[d[i]]=1;
		if (pri.size() == 0) continue;
		pri.back() -= 1;
		if (pri.back() == 0) pri.pop_back();
	}
	loop(i, 1, m + 1) if (!check[i]) return 0;
	return pri.size() == 0;
}
int32_t main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n >> m;
	d.resize(n), a.resize(m+1);
	loop(i, 0, n) cin >> d[i];
	loop(i, 1, m + 1) cin >> a[i];
	int l, r,b=0;
	for (l = 0, r = n - 1; l <= r; valid((l + r) / 2) ? sum=r = (l + r) / 2 - 1,b=1 : l = (l + r) / 2+1);
	cout << (sum || b? sum+2 : -1);
	return 0;
}