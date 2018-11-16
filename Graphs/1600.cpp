#include <iostream>
#include <algorithm>
#include <functional> 
#include <iomanip>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <set>
#include <bitset>
#include <map>
int w = 0;
#define  EPS    1e-10
#define CLR(v,d)        memset(v,d,sizeof(v))
#define rep(i,x) for(int(i)=0;(i)<(ll)(x);(i)++)
int const oo = (int)10e6;
typedef  long long ll;
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
char vowels[] = { 'a', 'o', 'e', 'u', 'i' };
int A[2 * 100000];
ll n, m;
bool cycle = false;
ll x, y, z;
bitset <64> bt;
set <int> st;
vector<bool>vis;
vector<vector<int>>v;
map<int, int>mp;
map<int, int>mp2;
priority_queue<long long, vector<long long>, greater<long long> >pq;
bool viss[100][100] = { 0 };
int l1, l2;
ll savedans[100000] = { 1 };
vector<pair<int,int>>v2;
vector<int>vc;
vector<int>va;
int gr[1000][1000];
ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a%b);
}
ll lcm(ll n, ll m)
{
	return (n*m) / gcd(n, m);
}
bool prime(ll n)
{
	for (ll i = 2; i*i <= n; i++)
	if (n%i == 0)
		return 0;
	return 1;
}
bool isvowels(char a)
{
	for (int i = 0; i < 5; i++)
	if (a == vowels[i])
		return true;
	return false;
}
int binary_search(int x)
{
	int l = 0, r = 500, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (mid*(mid + 1) == x)
			break;
		else if (mid*(mid + 1) >= x)
			r = mid - 1;
		else
			l = mid + 1;

	}
	if (mid*(mid + 1) == x)
		return mid;
	else
		return -1;
}
bool bal(string z)
{
	string x = z;
	reverse(x.begin(), x.end());
	if (z == x)
		return true;
	else
		return false;
}
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
}
void CDfs(int u, int p)
{
	if (vis[u]){
		cycle = true;
		return;
	}
	vis[u] = 1;
	for (int i = 0; i < v[u].size(); i++)
	if (v[u][i] != p)
		CDfs(v[u][i], u);
}


bool F(int i, ll sum)
{
	if (i == n)
		return sum%m == 0;
	if (savedans[i] != -1)
		return savedans[i];
	if (F(i + 1, sum + vc[i]) || F(i + 1, sum - vc[i]))
		return 1;
	return 0;

}

int FEB(int n)
{
	if (n <= 1)
		return 1;
	if (savedans[n] != -1)
		return savedans[n];
	return savedans[n] = FEB(n - 1) + FEB(n - 2);

}
int arr1[100005] = { -1 }, arr2[100005] = { -1 };
void Dfs(int u, int p, int c)
{
	if (vis[u])
		return;
	c++;
	arr1[u] = c; arr2[c - 1] = u;
	vis[u] = 1;

	for (int i = 0; i < v[u].size(); i++)
	{
		Dfs(v[u][i], u, c);
	}

	return;
}


queue<pair<int, int>>bq;
int BFS(int u, int p)
{
	if (vis[u])
		return 0;
	vis[u] = 1;
	cout << u << " ";
	if (u == p)
		return 0;
	bq.push({ u, 0 });
	vc[u] = 0;
	int cur, dep;
	while (!bq.empty()){
		pair<int, int>pa = bq.front(); bq.pop();
		cur = pa.first; dep = pa.second;
		for (int i = 0; i < v[u].size(); i++)
		if (vc[v[u][i]] == oo)
			bq.push({ v[u][i], dep + 1 }), vc[v[u][i]] = dep + 1;
		BFS(pa.first, pa.second);
	}

	return 0;
}

int find(int u)
{
	if (A[u] == u)
		return u;
	else
		return A[u] = find(A[u]);
}

string ok = "YES", no = "NO";
int main()
{
	cin >> n >> m;
	ll x=1; bool f = false; vc.resize(n);
	for (int i = 1; i < n; i++)
		cin >> vc[i];
	while (x < m)
		x += vc[x];
	if (x==m)
		cout << ok << endl;
	else
		cout << no << endl;
//	system("pause");
}