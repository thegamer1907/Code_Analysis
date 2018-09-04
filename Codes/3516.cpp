#include <iostream>
#include <cstdio>
#include <algorithm>=

using namespace std;
#define LL long long
const int maxn = 100005;

LL n;
bool ok ( LL k )
{
	LL sum = n;
	LL ans = 0;
	while ( sum > 0 )
	{
		if ( sum < k )
		{
			ans += sum;
			sum = 0;
		}
		else
		{
			ans += k;
			sum -= k;
		}
		sum -= sum / 10;
	}
	return ans * 2 >= n;
}

int main()
{
	while ( ~scanf ( "%lld", &n ) )
	{
		LL l = 1, r = n, ans;
		while ( l <= r )
		{
			LL mid = ( l + r ) / 2;
			if ( ok ( mid ) ) ans = mid, r = mid - 1;
			else l = mid + 1;
		}
		printf ( "%lld\n", ans );
	}
	return 0;
}
