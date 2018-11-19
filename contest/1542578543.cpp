#include <bits/stdc++.h> 

#define repp(i,a,b) for(int i = a; i <= b; i++)
#define rep(i,n) for(int i = 1; i <= n; i++)
#define onesll(c) __builtin_popcountll(c)
#define ones(c) __builtin_popcount(c)
#define all(c) c.begin(), c.end()
#define llu unsigned long long
#define sz(c) (int) c.size()
#define pb(x) push_back(x)
#define lb lower_bound
#define up upper_bound
#define ll long long 
#define endl "\n"
using namespace std;
// stringstream
stringstream ss;

// Coding begins here
const int N = 1e5 + 5;
const int mod = 1e9 + 7;

int arr[N + 10];
int vis[20];
int main(){
	ios_base::sync_with_stdio(false);
	int h, m, s, to, tw;
	cin >> h >> m >> s  >> to  >> tw;
	m = m / 5;
	s = s / 5;
	if(m == 0){
		m += 12;
	}
	if(s == 0){
		s += 12;
	}
	for(int i = 1; i <= 12; i++){
		vis[m] = 1;
		vis[s] = 1;
		vis[h] = 1;
	}
	bool st = 1;

	int start = min(to, tw); 
	int end = max(to, tw);

	for(int i = start; i < end; i++){
		if(vis[i]){
			st = 0;
			break;
		}
	}
	if(st){
		cout << "YES" << endl;
		return 0;
	}

	st = 1;

	for(int i = end; i <= 12; i++){
		if(vis[i]){
			st = 0;
			break;
		}
	}
	for(int i = 1; i < start; i++){
		if(vis[i]){
			st = 0;
			break;
		}
	}

	if(st){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
} 