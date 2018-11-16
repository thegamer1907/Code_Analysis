#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pi pair<int,int>
#define debug(a) cout << #a << " = " << endl;
#define REP(i,j,k) for(int i = j; i < k; i++)
using namespace std;
int n,b;
vector<int> a,cnt;
int odd,eve;
signed main()
{
	cin >> n >> b;
	a.resize(n+1);
	REP(i,1,n+1) cin >> a[i];
	int ans = 0;
	REP(i,1,n+1)
	{
		odd += a[i]%2;
		eve += 1-a[i]%2;	
		if(odd != eve) continue;
		cnt.push_back(abs(a[i+1]-a[i]));
	}
	sort(cnt.begin(),cnt.end());
	reverse(cnt.begin(),cnt.end());
	int res = 0;
	while(res <= b && !cnt.empty())
	{
		res += cnt.back();
		ans++;
		cnt.pop_back();
	}
	if(res > b) ans--;
	cout << ans;
}