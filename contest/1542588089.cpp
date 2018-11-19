#include <bits/stdc++.h>
using namespace std;

typedef long long lint; typedef pair<int, int> ii;
const int MOD = 1'000'000'007, MOD2 = 1'000'000'009;
const int INF = 0x3f3f3f3f; const lint BINF = 0x3f3f3f3f3f3f3f3fLL;

int h, m, s, t1, t2;
int pos1, pos2, pos3;
// 43200 slides

int inQuad(int x){
	int now = x;
	while(now != pos1 && now != pos2 && now != pos3) now = (now + 1) % 43200;
	if(now == pos1)
		return 1;
	else if(now == pos2)
		return 2;
	else
		return 3;
}

int solve(){
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12) h = 0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;
	pos1 = h * 3600 + m * 60 + s;
	pos2 = m * 720 + s * 12;
	pos3 = s * 720;
	cerr << pos1 << ' ' << pos2 << ' ' << pos3 << endl;
	cerr << t1*3600 << ' ' << t2*3600 << endl;
	if(inQuad(t1 * 3600) == inQuad(t2 * 3600))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}

int main(){
	ios::sync_with_stdio(0);
	// int t; cin >> t; while(t--)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}
