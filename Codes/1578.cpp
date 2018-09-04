//If you are trying to hack me I wish you can get it, Good Luck :D.
#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf (stderr,args)
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int MAX = 112345;
const int INF = 0x3f3f3f3f;
const ll  MOD = 1000000007;

int n;
ll S, a[MAX];
ll b[MAX];
ll cost (int k) {
    
    for (int i = 0; i < n; i++) {
	b[i] = a[i] + (ll)((ll)((i + 1)) * (ll)k);
    }
    sort(b, b + n);
    
    ll ret = 0;
    for (int i = 0; i < k; i++) {
	ret += b[i];
    }
    return ret;
}

int main () {
    scanf ("%d %lld", &n, &S);
    for (int i = 0; i < n; i++) {
	scanf ("%lld", a + i);
    }
    
    int l, r;
    l = 0; r = n;
    while (l < r) {
	int mid = (l + r + 1) / 2;

	if (cost(mid) <= S) {
	    l = mid;
	} else r = mid - 1;
    }

    printf ("%d %lld\n", l, cost(l));
    return 0;
}

