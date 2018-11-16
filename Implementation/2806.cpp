
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
set<int> s; 
int n,p,q;
signed main()
{
	cin >> n;
	cin >> p;
	REP(i,0,p)
	{
		int a; cin >> a;
		s.insert(a);
	}
	cin >> q;
	REP(i,0,q)
	{
		int a; cin >> a;
		s.insert(a);
	}
	REP(i,1,n+1) if(s.find(i) == s.end()) return cout << "Oh, my keyboard!",0;
	cout << "I become the guy.";
}