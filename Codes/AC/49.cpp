#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
using namespace std;
#define ll long long
const int maxm = 500005;
ll s[maxm], a[maxm];
map<int, int>p;
int main()
{
	int n, i, j;
	ll k, sum = 0, ans;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		scanf("%lld", &a[i]);
		sum += a[i];
	}
	if (sum % 3 != 0)
	{
		printf("0\n");
		return 0;
	}
	k = sum / 3, sum = 0;
	for (i = 1;i <= n;i++)
	{
		s[i] = s[i - 1];
		sum += a[i];
		if (sum == k) s[i]++;
	}
	sum = 0, ans = 0;
	for (i = n;i >= 1;i--)
	{
		sum += a[i];
		if (sum == k)
			ans += s[i - 2];
	}
	printf("%lld\n", ans);
	return 0;
}