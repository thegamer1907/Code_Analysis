#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef pair<int, int> ii;
typedef long long ll;

const int N = 500010;
int n, v[N];

bool test(int x)
{
	if (2*x > n)
		return false;
	
	int p1 = x-1, p2 = n-1;
	while (p1 >= 0 and v[p2] >= 2*v[p1])
	{
		p1--;
		p2--;
	}
	return p1 == -1;
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	
		scanf("%d", v+i);
	sort(v, v+n);
	
	int lo = 0, hi = n/2;
	while (lo < hi)
	{
		int mid = (lo+hi+1)/2;
		if (test(mid))
			lo = mid;
		else
			hi = mid-1;
	}
	printf("%d\n", n-lo);
	return 0;
}


