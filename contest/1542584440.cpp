#include <bits/stdc++.h>
using namespace std;
	int vis[13];
inline bool judge(int x)
{
	return vis[x];
}

int main()
{
	int  m, s, t1, t2, f1, f2;
	int h[3];
	memset(vis, 0, sizeof vis);
	cin >> h[0] >> h[1] >> h[2] >> t1 >> t2;
	if (!h[1] && !h[2]) {
		vis[h[0]] = 1;
	}
	if (!h[2] && h[1] % 5 == 0) {
		vis[h[1] / 5] = 1;
	}
	if (h[2] % 5 == 0) {
		vis[h[2] / 5] = 1;
	}
	h[1] /= 5;
	h[2] /= 5;
//	int maxx = max(h, max(m, s));
//	int minn = min(h, min(m, s));
//	int mid;
	sort(h, h + 3);
	int ans = 0;
//	cout << h[0] << " " << h[1] << " " << h[2] << endl;
	if (t1 > h[0] && t2 > h[0] && t1 <= h[1] && t2 <= h[1] && !vis[t1] && !vis[t2]) ans = 1;
	if (t1 > h[1] && t2 > h[1] && t1 <= h[2] && t2 <= h[2] && !vis[t1] && !vis[t2]) ans = 1;
	if ((t1 > h[2] || t1 <= h[0]) && (t2 <= h[0] || t2 > h[2]) && !vis[t1] && !vis[t2]) ans = 1;
	if (ans) {
		puts("YES");
	} else {
		puts("NO");
	}
	
}