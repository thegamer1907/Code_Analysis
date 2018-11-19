# pragma GCC optimize("O3")
# include <bits/stdc++.h>
# define maxn 100005
# define ll long long
# define clock (clock() * 1000.0 / CLOCKS_PER_SEC)
# define rc(s) return cout << s,0
# define _ ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
# define db(x) cerr << #x << " = " << x << '\n'
# define pb push_back
# define mp make_pair
# define sz(x) (int)((x).size())
//# define int ll
using namespace std;

int n,k,cnt[1 << 17],x;

int32_t main(){_
    //freopen("input","r",stdin);
	cin >> n >> k;
	for(int i = 1;i <= n;i++)
	{
		int mask = 0;
		for(int j = 0;j < k;j++)
		{
			cin >> x;
			mask |= (x << j);
		}
		cnt[mask]++;
	}
	if(cnt[0]) rc("YES");
	for(int mask1 = 0;mask1 < (1 << k);mask1++)
	{
		for(int mask2 = 0;mask2 < (1 << k);mask2++)
		{
			if(mask1 & mask2) continue;
			if(cnt[mask1] && cnt[mask2]) rc("YES");
		}
	}
	rc("NO");
}
