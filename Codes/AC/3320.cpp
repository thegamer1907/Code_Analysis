#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
const int N = 100100;
int main()
{
	int n;
	scanf("%d", &n);
	vector<int> x;
	int ma = 1e9 + 1;
	for (int i = 0; i < n; i++)
	{
		int t;
		scanf("%d", &t);
		x.push_back(t);
		ma = min(ma, t);
	}
	auto d = ma / n;
	for (auto &y : x)
		y -= d*n;
	auto cur = 0;
	auto offs = 0;
	while(x[cur]>0)
	{
		offs++;
		cur = (cur + 1) % n;
		x[cur] -= offs;
	}
	printf("%d\n", cur + 1);
	return 0;
}