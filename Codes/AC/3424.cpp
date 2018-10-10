#include <cstdio>
using namespace std;
long long num;

bool chk(long long cur)
{
	long long temp = num;
	long long ret = 0;
	while (temp > 0 && temp-cur>=0)
	{
		ret += cur;
		temp -= cur;
		temp = temp-temp/10LL;
	}
	if (temp < cur) ret += temp;
	if (ret >= (num+1LL) / 2LL) return true;
	return false;
}

int main()
{
	scanf("%lld", &num);
	long long l = 1;
	long long r = num*2LL;
	long long mid = 0;
	while (l+1< r)
	{
		mid = (l + r) / 2LL;
		if (chk(mid)) r = mid;
		else l = mid;
	}
	if (chk(l)) printf("%lld\n", l);
	else printf("%lld\n", r);
	return 0;
}