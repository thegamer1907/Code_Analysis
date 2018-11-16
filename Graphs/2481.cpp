#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define sd(x) scanf("%d",&x);
#define sll(x) scanf("%I64d",&x);
#define pd(x) printf("%d",x);
#define pll(x) printf("%I64d",x);

int c[10007];
vector<int> v[10007];
int res = 0;

void func(int r, int p)
{
	if(c[r] != p)
		res++;
	p = c[r];
	for (int i = 0; i < v[r].size(); ++i)
		func(v[r][i],p);
}

int main()
{
	int n,p;
	sd(n);
	for (int i = 2; i <= n; ++i)
	{
		sd(p);
		v[p].push_back(i);
	}
	for (int i = 1; i <= n; ++i)
		sd(c[i]);
	func(1,0);
	cout << res;
	return 0;
}