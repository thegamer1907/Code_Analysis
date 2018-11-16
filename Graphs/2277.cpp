#pragma comment(linker, "/stack:336777216")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define _CRT_SECURE_NO_WARNINGS
#define INF 1e18
#define endl "\n"
#define check cout << "fk" << endl;
#define tests int T;cin>>T;
#define PI 3.14159265358979323846
#define H(q,r) (q)*m + (r)
#define F(i,a,b) for(int i=(a);i<(b);i++)
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
template <typename T>
using vec3 = array<T, 3>;
template <typename T>
using vec2 = array<T, 2>;
template <typename T, size_t _bits>
using mat2d = array<array<T, _bits>, _bits>;

int maxdepth = 0;
vector<int> adj[2001];
vector<int> supers;

int main() {
	FASTIO;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (a == -1) supers.push_back(i);
		else {
			adj[a].push_back(i);
			adj[i].push_back(a);
		}
	}
	//bfs from each super and find max depth, so number of minimum teams = max depth
	//now find max of all of them
	int ans = 1;
	for (int super : supers) {
#define thisn first
#define prevn second.first
#define dep second.second
		queue<pair<int,pair<int,int>>> q;
		q.push({ super,{0,1} });
		while (!q.empty()) {
			int thisnode = q.front().thisn;
			int prevnode = q.front().prevn;
			int depth = q.front().dep;
			q.pop();
			ans = max(ans, depth);
			for (int nextnode : adj[thisnode]) {
				if (nextnode != prevnode) 
					q.push({ nextnode,{thisnode,depth + 1} });
			}
		}
	}
	cout << ans << endl;
	return 0;
}