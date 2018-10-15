#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 110;





int n, k, s = 0, min_m = 1e7, max_m = 0, a[N];
int main()
{
	//freopen("std.in", "r", stdin);
	scanf("%d\n%d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		s += a[i]; min_m = min(min_m, a[i]);
		max_m = max(max_m, a[i]);
	}
	int x = ceil((s+k)*1.0/n);
	printf("%d %d", max(x, max_m), max_m + k);
}
