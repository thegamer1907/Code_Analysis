#include <bits/stdc++.h>
/*
**
Success doesn't come to you ,
You Go To IT .
**
*/
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define finish(x) return cout << x << endl, 0;
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;


ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
const int MX = 1e5 + 5;
vector<vector<int>>v(MX);
int n, k, ans;
vector<int>opt(MX);
void dfs(int nod,int p, int cats){
	if (opt[nod])cats++;
	else cats = 0;
	if (cats > k)return ;
	bool f = 1;
	for (int w : v[nod]){
		if (w != p)
			dfs(w, nod, cats),f=0;
	}
	ans += f;
}
int main()
{
	Compiler_Beso

		
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> opt[i + 1];
	}
	for (int i = 0; i < n - 1; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,-1, 0);
	cout << ans;
	return 0;
}