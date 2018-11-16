#include<bits/stdc++.h>
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define pb emplace_back
#define pi pair<int,int>
#define REP(i,j,k) for(int i = j; i < k; ++i)
#define all(v) (v).begin(),(v).end()
#define debug(a) cout << #a << " = " << a << endl;
using namespace std;
int n,m;
int a[30009];
signed main()
{IOS
	cin >> n >> m;
	REP(i,1,n) cin >> a[i];
	int k = 1;
	while(k != m && k < n)
	{
		k += a[k];
	}
	if(k == m) cout << "YES";
	else cout << "NO";
}