/**
 * author : wallcrawler 
 **/
// I'm gonna fuck every contest from now on :: Mind it
/*
    ====== 	   ====
      ||   ||\\ ||  ||  	 
      ||   || \\||  ||	BAN GAYA LONG LONG INT :p
    ======
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define el "\n"
int P = pow(10, 9) + 7;
// okay let's get ready to solve : Contest Problems - kakoe, let's get on with it
// for variables
const int N = 2e5 + 20;
string s, t;
int p[N], n, l, r, m, a, ans = -1;

void solve() {
	cin >> s >> t;
	n = s.size();
	m = t.size();
	for(int i = 0; i < n; i++) cin >> a, p[a-1] = i;
	l = 0, r = n-1;
	while(l <= r) {
		int mid = (l + r) / 2;
		// check if it is a subsequence
		int k = 0, j = 0;
		for(int i = 0; i < n and j < m; i++) if(t[j] == s[i] and p[i]>mid) j++;
		if(j == m) ans = mid, l = mid + 1;
		else r = mid - 1;
	}
	cout << ans + 1 << el;
} 

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("input.txt", "r", stdin);
	solve();

} 
