#include<bits/stdc++.h>
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pi pair<int,int>
#define endl '\n'
#define debug(a) cout << #a << " = " << a << endl;
#define REP(i,j,k) for(int i = j; i < k; i++)
#define MOD 1000000007ll
using namespace std;
int n;
int a[109];
signed main()
{
	cin >> n;
	REP(i,1,n+1)
	{
		cin >> a[0];
		a[a[0]] = i;
	}
	REP(i,1,n+1) cout << a[i] << ' ';
}