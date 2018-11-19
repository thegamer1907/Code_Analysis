#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
	int h, m, s, t1, t2, ok1 = 1, ok2 = 1; cin >> h >> m >> s >> t1 >> t2;
	if (h==12) h = 0; if (t1==12) t1 = 0; if (t2==12) t2 = 0;
	h *= 3600, t1 *= 3600, t2 *= 3600;
	h += m*60 + s; 
	m *= 720; m += s; s *= 720;
	if (t1>t2) swap(t1, t2);
	//cout << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;
	for (int i=t1;i<=t2;i++) if (i==h||i==m||i==s) ok1 = 0;
	for (int i=t2;i<=43200;i++) if (i==h||i==m||i==s) ok2 = 0;
	for (int i=0;i<=t1;i++) if (i==h||i==m||i==s) ok2 = 0;
	cout << ((ok1||ok2)? "YES\n": "NO\n");
}