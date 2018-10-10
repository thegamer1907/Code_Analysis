#include <bits/stdc++.h>

using namespace std;

#define SuperSaiyanBlue ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define FinalFlash	    cin.ignore(); cin.get()
#define sz(c)		    (int)(c).size()
#define all(c)		    (c).begin(), (c).end()

typedef long long ll;
typedef pair<int, int> pii;

const int oo = (int)1e9+7;

ll nb, ns, nc;
ll pb, ps, pc, r;
ll kb, ks, kc;

inline bool ok(ll x)
{
	return max(0ll, (kb*x)-nb)*pb + max(0ll, (ks*x)-ns)*ps + max(0ll, (kc*x)-nc)*pc <= r;
}

int main()
{
	SuperSaiyanBlue;

	string s;
	cin >> s;

	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc >> r;

	for (int i = 0; i < sz(s); ++i)
	{
		if (s[i] == 'B') ++kb;
		else if (s[i] == 'S') ++ks;
		else ++kc;
	}

	ll st = 0, en = r+max(nb, max(ns, nc));

	while (st < en)
	{
		ll mid = (st+en+1)>>1;

		if (ok(mid))
			st = mid;
		else
			en = mid-1;
	}

	cout << st;

	FinalFlash;
}