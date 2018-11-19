#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

#define INF 100000000
#define MINF 10000000000000000LL

string a, c;
int n;

int main()
{
	cin >> a >> n;
	bool front = false, tail = false, f = false;
	for (int i = 1; i <= n; ++i)
	{
		cin >> c;
		if (c[0] == a[0] && c[1] == a[1])
		{	f = true; break;	}
		if (c[1] == a[0]) front = true;
		if (c[0] == a[1]) tail = true;
		if (front && tail)
		{	f = true; break;	}
	}
	if (f) puts("YES");
	else puts("NO");
	return 0;
}

