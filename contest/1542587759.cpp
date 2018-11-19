#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define maxn 200
using namespace std;

struct node
{
	double po;
	int i;
}in[10];

bool cmp(node a, node b)
{
	return a.po < b.po;
}

int main()
{
	// freopen("in", "r", stdin);
	int h, m, s;
	scanf("%d %d %d", &h, &m, &s);
	if (h == 12)
		h -= 12;
	memset(in, 0, sizeof(in));
	in[0].po = 30.0 * (double)(h + m/60.0 + s / 3600.0);
	in[1].po = 6.0 * (double)(m + s / 60.0);
	in[2].po = 6.0 * (double)s;
	scanf("%lf %lf", &in[3].po, &in[4].po);
	in[3].po *= 30;
	in[4].po *= 30;
	in[3].i = in[4].i = 1;
	sort(in, in + 5, cmp);
	for (int i = 0; i < 5; i++)
	{
		if (in[i % 5].i == 1 && in[(i + 1) % 5].i == 1)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}

