#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c:\\users\\wangyiming\\desktop\\in.txt", "r", stdin);
	int h, m, s, t1, t2;
	while (cin >> h >> m >> s >> t1 >> t2)
	{ 
		int cnt = 0;
		int x = min(t1, t2), y = max(t1, t2);
		if (h >= x && h < y) cnt++;
		if (m >= x * 5 && m < y * 5) cnt++;
		if (s > x * 5 && s < y * 5) cnt++;
		if (cnt == 0 || cnt == 3) puts("YES");
		else puts("NO");
	}
	return 0;
}