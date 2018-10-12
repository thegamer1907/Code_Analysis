#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 10000005;
ll freq[N],ans[N];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
	freq[1] = 1;
	for (int i = 2; i < N; ++i) {
		if (freq[i] == 0) {
			freq[i] = i;
			for (long long j = (long long)i * i; j < N; j += i) {
				freq[j] = i;
			}
		}
	}
	ll n;
	cin>>n;
	for (int i = 0; i < n; ++i) {
		ll t;
		cin>>t;
		while (t != 1) {
			int d = freq[t];
			++ans[d];
			while (t % d == 0) {
				t /= d;
			}
		}
	}
	for (int i = 1; i < N; ++i) {
		ans[i] += ans[i - 1];
	}
	int m;
	cin>>m;
	for (int i = 0; i < m; ++i) {
		int l, r;
		cin>>l>>r;
		r = min(r, N - 1);
		if (l > r) {
			cout<<"0\n";
		} else {
			cout<<ans[r]-ans[l-1]<<"\n";
		}
	}
	return 0;
}


