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
	string s;
	cin >> s;
	int cnt = 0;
	for(auto i:s) if(isupper(i)) ++cnt;
	if(2*cnt > s.size()) for(auto &i:s) i = toupper(i);
	else for(auto &i:s) i = tolower(i);
	cout << s;
}