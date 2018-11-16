// kartikay26
#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()
#ifndef ONLINE_JUDGE
#include "prettyprint.hpp"
#define debug(...) cout << "debug: " << #__VA_ARGS__ " = " << make_tuple(__VA_ARGS__) << endl
#else
#define debug(...) 0
#endif
typedef long long int ll;
#define int ll
typedef vector<int> vi;
typedef pair<int, int> pii;

const int N = 1e4+1;

int vis[2*N+1];

int bfs(int n, int m){
	int depth = 0;
	vi curr = {n};
	vi next = {};
	while(!curr.empty()){
		for(auto i : curr){
			vis[i] = true;
			if(i==m) return depth;
			if(i<=N and !vis[i*2]) next.push_back(i*2);
			if(i>0 and !vis[i-1]) next.push_back(i-1);
		}
		curr = next;
		next.clear();
		depth ++;
	}
	return -1;
}

int32_t main(){
	fast_io();
	int n, m;
	cin >> n >> m;
	cout << bfs(n,m) << endl;
}