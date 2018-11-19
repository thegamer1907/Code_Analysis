#include <bits/stdc++.h>
using namespace std;
string p, s[105], all;
int n;
int main()
{
	//freopen("in.txt", "r", stdin);
	cin >> p;
	cin >> n;
	all = "";
	for(int i = 1; i <= n; ++i)
	{
		cin >> s[i];
	}
	int flag = 0;
	for(int i = 1; i <= n; ++i)
	for(int j = 1; j <= n; ++j)
	{
		all = s[i]+s[j];
		for(int k = 1; k < all.length(); ++k)
		{
			if(all[k] == p[1] && all[k-1] == p[0])
			flag = 1;
		}
		if(flag) break;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}