#include<bits/stdc++.h>
using namespace std; 

#define rep(i, a, b)	for (int i = a; i < b; i++)
#define per(i, a, b) 	for (int i = a; i >= b; i--)
#define ll 				long long 
#define ld				long double
#define pb				push_back
#define all(x)			(x).begin(), (x).end()
#define vi				vector<int>
#define vll				vector<ll>
#define pii				pair<int, int>
#define inf				2147483647

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, a[100000], ans[100000];
	cin >> n >> m;
	rep (i, 0, n)
		cin >> a[i];
	set<int> s;
	per (i, n - 1, 0) {
		s.insert(a[i]);
		ans[i] = s.size();
	}
	while (m--) {
		int l;
		cin >> l;
		cout << ans[l - 1] << endl;
	}
    return 0;
}
