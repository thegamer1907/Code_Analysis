#include <bits/stdc++.h>

using namespace std;

#define sz(c)  (int)(c).size()
#define all(c) ((c).begin()), ((c).end())

typedef pair<int, int> pii;
typedef long long ll;

const int oo = 1e9+7;

const int N = (int)1e5+5;
int pre[N];

int main()
{
	
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", pre+i);
		pre[i] += pre[i-1];
	}
	
	int q;
	scanf("%d", &q);
	
	while (q--)
	{
		int x;
		scanf("%d", &x);
		int idx = lower_bound(pre+1, pre+n+1, x)-pre;
		if (idx==n+1) --idx;
		printf("%d\n", idx);
	}
	
}