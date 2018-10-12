#include <bits/stdc++.h>
typedef long long ll;
#define pi acos(-1)
const int maxn = 3e5 + 5;
const int mod = 1e9 + 7;
const int inf = 0x3f3f3f3f;
using namespace std;

int n, m;
int a[maxn];
int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i = 0;i < n;i++)	scanf("%d", &a[i]);
		
	sort(a, a+n);
	int max1 = a[n-1]+m;
	int min1 = 0;
	for(int i = 0;i < n-1;i++)
	{
		m -= a[n-1]-a[i];
		if(m <= 0)
		{
			min1 = a[n-1];
		}
	}
	if(m > 0)
	{
		a[n-1] += m/n;
		if(m%n == 0)	min1 = a[n-1];
		else	min1 = a[n-1] + 1;
	}
	printf("%d %d\n", min1, max1);
	
	return 0;
 } 