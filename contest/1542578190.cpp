#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define mp make_pair
#define f first
#define s second
#define kz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FILE ""
#define fr freopen(FILE".in", "r", stdin); freopen(FILE".out", "w", stdout);
#define y1 asafas
#define x0 afasfa
#define y0 safasf
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int N = 3e5 + 111, inf = 1e9, mod = 1e9 + 7;
const ll linf = 1e18;

int mask(string s){
	int num = 0;
	for(int i = 0; i < (int)s.size(); ++i)
		num = num * 2 + s[i] - '0';
	return num;
}

int n, m, a[N], b[N];
string s[N], pre[N], suf[N];
bool ok[211][16][33000];

int main(){
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> s[i];
	cin >> m;
	for(int i = n + 1; i <= m + n; ++i)
		cin >> a[i] >> b[i];
	for(int i = 1; i <= n; ++i){
		pre[i] = s[i].substr(0, min(15, (int)s[i].size()));
		suf[i] = s[i].substr(s[i].size() - min(15, (int)s[i].size()), min(15, (int)s[i].size()));;
		for(int j = 1; j <= 15; ++j)
			for(int q = 0; q + j - 1 < (int)s[i].size(); ++q){
				ok[i][j][mask(s[i].substr(q, j))] = 1;
			}
	}
	for(int i = n + 1; i <= n + m; ++i){
		pre[i] = pre[a[i]] + pre[b[i]];
		pre[i] = pre[i].substr(0, min(15, (int)pre[i].size()));
		suf[i] = suf[a[i]] + suf[b[i]];
		suf[i] = suf[i].substr(suf[i].size() - min(15, (int)suf[i].size()), min(15, (int)suf[i].size()));
		for(int j = 1; j <= 15; ++j)
		for(int m = 0; m < (1 << j); ++m)
			if(ok[a[i]][j][m] || ok[b[i]][j][m])
				ok[i][j][m] = 1;
		string st = suf[a[i]];
		st += pre[b[i]];
		for(int j = 1; j <= 15; ++j)
			for(int q = 0; q + j - 1 < (int)st.size(); ++q)
				ok[i][j][mask(st.substr(q, j))] = 1;
		int ans = 0;
		for(int j = 1; j <= 15; ++j){
			bool o = 1;
			for(int m = 0; m < (1 << j); ++m)
				if(!ok[i][j][m]){
					o = 0;
					break;
				}
			if(!o)
				break;
			ans = j;
		}
		cout << ans << endl;
	}
	return 0;
}