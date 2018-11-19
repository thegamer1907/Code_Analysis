#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

bool vis[60];

int main()
{
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	if (h == 12) h = 0;
	t1 *= 5;
	t2 *= 5;
	h *= 5;
	double ss = s;
	double mm = m + s / 60.0;
	double hh = h + mm / 12.0;
	bool ok = false;
	
	int cnt = 0;
	
	if (t1 > t2) swap(t1,t2);
	if (ss > t1 + 1e-5 && ss < t2 - 1e-5) cnt++;
	if (mm > t1 + 1e-5 && mm < t2 - 1e-5) cnt++;
	if (hh > t1 + 1e-5 && hh < t2 - 1e-5) cnt++;
	ok = (cnt == 0) || (cnt == 3);
	puts(ok?"YES":"NO");
}
