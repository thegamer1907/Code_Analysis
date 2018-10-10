#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long int ll;

int s(int n)
{
	int ret = 0;
	while(n)
	{
		ret += n%10;
		n /= 10;
	}
	return ret;
}

int main(void)
{
	ios::sync_with_stdio(0);
	int k; cin >> k;
	int c = 19;
	while(k)
	{
		if (s(c) == 10) --k;
		if (k == 0) break;
		c += 9;
	}
	cout << c << '\n';
}