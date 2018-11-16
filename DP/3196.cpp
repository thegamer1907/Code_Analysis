#include <bits/stdc++.h>

#define fto(i, x, y) for(auto i = (x); i <= (y); ++i)
#define fdto(i, x, y) for(auto i = (x); i >= (y); --i)
#define ftoa(i, x, y, a) for(auto i = (x); i <= (y); i += a)
#define ftoit(it, var) for (auto it = var.begin(); it != var.end(); ++it)

#define ii pair<int, int>
#define mp make_pair
#define ff first
#define ss second

#define vi vector<int>
#define vii vector<ii>
#define ll long long
#define vll vector<ll>

#define eb emplace_back
#define ef emplace_front
#define lb lower_bound
#define ub upper_bound

#define oo 1000000007
#define OO 1000000000000000007LL

using namespace std;

#define Pro "tmp"
#define maxN 300007

int a[maxN];

int main() {
	#ifndef ONLINE_JUDGE
        freopen(Pro".inp", "r", stdin);
        freopen(Pro".out", "w", stdout);
    #endif // ONLINE_JUDGE
    
    int n, k;
    scanf("%d%d", &n, &k);

    vi ans;
    int cnt = 0;

    fto(i, 1, n) scanf("%d", &a[i]);
    fto(i, 1, n-1) {
    	if (a[i]%2) ++cnt;
    	else --cnt;
    	if (!cnt) ans.eb((int)abs(a[i]-a[i+1]));
    }

    
    sort(ans.begin(), ans.end());
    int sum = 0;

    fto(i, 0, (int)ans.size()-1) {
    	if (k >= ans[i]) {
    		k -= ans[i];
    		++sum;
    	}

    }

    printf("%d\n", sum);
    return 0;
}