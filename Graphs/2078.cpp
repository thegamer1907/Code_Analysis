#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define sz(n) (int)n.size()
#define pb(s) push_back(s);
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define N 1000000
#define INF LLONG_MAX
#define PI acos(-1)
#define clr(dp,n) memset(dp,n,sizeof dp)
#define ex(n) return cout<<n<<finl,0;
int dx[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
void fast() {

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
	//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);

	//  freopen("output.out", "w", stdout);
#endif
}
int level[N];
int bfs(int u,int v)
{
	for (int i = 0; i < N; i++)
		level[i] = INT_MAX;
	queue<int>q;
	q.push(u);
	level[u] = 0;
	while (!q.empty())
	{
		int p = q.front();
		q.pop();
		if(level[p*2])
		if (p * 2 <= 20000&&level[p*2]>1+level[p])
		{
			q.push(p * 2);
			level[p * 2] = 1 + level[p];
		}
		if (p - 1 >= 1&&level[p-1]>1+level[p])
		{
			q.push(p - 1);
			level[p - 1] = 1 + level[p];
		}
	}
	return level[v];
}
int main()
{
	Mohammed_Atef_Hassan
		ll n, m;
	cin >> n >> m;
	cout << bfs(n, m) << finl;
}