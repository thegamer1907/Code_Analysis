#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int maxn = 200005;

int main()
{
	ll n, m, k, p;
	cin >> n >> m >> k;
	ll t = k, b = 0, sum = 0;
	for (int i = 0; i < m; i++) {
		cin >> p;
		if (p <= t) {
			if (b)b++;
			else b++, sum++;
		}
		else {
			t += b, b = 1,sum++;
			if (p > t) {
				t=t+(((p-t)+k-1)/k)*k;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}