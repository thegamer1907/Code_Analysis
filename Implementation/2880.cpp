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
int n;
signed main()
{
	string a;
	getline(cin,a);
	set<char> s;
	for(auto i:a) if(isalpha(i)) s.insert(i);
	cout << s.size();
}