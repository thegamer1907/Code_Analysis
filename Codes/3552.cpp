#include <iostream>
#include <cmath>

using namespace std;

typedef long long LL;

LL amount_of(LL n, LL k)
{
	LL ans = 0;
	while(n > 0) {
		ans += min(n,k);
		n -= min(n,k);
		n -= n/10;
	}
	return ans;
}

LL ceil_div2(LL n)
{ return n/2 + (n%2); }

int main()
{
	LL n;
	cin >> n;
	
	LL l = 1, r = n;
	while(r-l > 5) {
		LL mid = l + (r-l) / 2;
		if(amount_of(n,mid) >= ceil_div2(n))
			r = mid;
		else
			l = mid + 1;
	}
	for(LL i = l; i <= r; i++)
		if(amount_of(n,i) >= ceil_div2(n)) {
			cout << i;
			return 0;
		}
}