#include "bits/stdc++.h"
using namespace std;

int A[112345];

int main()
{
	int h, m, s, t, tt, z;
	cin >> h >> m >> s >> t >> tt;
	if(t > tt) swap(t, tt);
	bool f(1), ff(1);

	if(t <= h and h < tt) f = 0;
	else ff = 0;

	if(t <= m/5 and m/5< tt) f = 0;
	else ff = 0;

	if(t <= s/5 and s/5 < tt) f = 0;
	else ff = 0;

	if(f or ff) puts("YES");
	else puts("NO");


}