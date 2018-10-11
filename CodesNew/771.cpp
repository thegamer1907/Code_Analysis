///////////////////////////////////////
///// << In The Name Of Allah >> /////
/////////////////////////////////////
#include <bits/stdc++.h>
#define Salo7a ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define all(v) v.begin(),v.end()
using namespace std;
const int N = 1e6 + 5;
int main()
{
	Salo7a;
	int n, m, com = 0;
	cin >> n >> m;
	vector<string>a(n), b(m);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		if (find(all(a), b[i]) != a.end())
			++com;
	}

	int av1 = a.size() - com, av2 = b.size() - com, i = 1;
	while (true)
	{
		if (i++ & 1)
		{
			if (com)--com;
			else if (av1)--av1;
			else return puts("NO"), 0;
		}
		else
		{
			if (com)--com;
			else if (av2)--av2;
			else return puts("YES");
		}
	}
	return 0;
}