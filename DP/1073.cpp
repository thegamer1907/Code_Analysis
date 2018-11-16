#include <bits/stdc++.h>`

#define slld(longvalue) scanf("%lld", &longvalue)
#define plld(longvalue) printf("%lld\n", longvalue)

#define slf(longvalue) scanf("%lf", &longvalue)
#define plf(longvalue) printf("%lf\n", longvalue)
#define sc(letter) scanf("%c", &letter)
#define pc(letter) printf("%c", letter)

#define ss(name) scanf("%s", name)
#define ps(name) printf("%s", name)

#define pnew printf("\n")

#define ll long long
#define ull unsigned long long
#define pll pair < long long, long long >
#define pii pair < int, int >

#define printcase(indexing,ans) printf("Case %lld: %lld\n", indexing, ans)

#define pb(x) push_back(x)

#define bug printf("BUG\n")

#define mxlld LLONG_MAX
#define mnlld -LLONG_MAX

#define mxd 2e8
#define mnd -2e8

#define pi 3.14159265359

#define mod 1000000009

#define maxn 100005

using namespace std;

bool check(ll n, ll pos)
{
	return n & (1 << pos);
}

ll Set(ll n, ll pos)
{
	return n = n | (1 << pos);
}

ll diff[maxn];
ll mxdiff[maxn];
ll arr[maxn];


// Solve for O(n) algorithm
int main()
{
    ll i, j, k, l, m, n, o, r, q;
    ll testcase;
    ll input, flag, tag, ans;

    // freopen("in.txt", "r", stdin);

    while(cin >> n)
    {

        for(i = 1; i <= n; i++)
        {
            slld(arr[i]);
        }

        ll zero = 0, one = 0;
        for(i = 1; i <= n; i++)
        {
            if(arr[i]) one++;
            else zero++;

            diff[i] = zero - one;
        }

        mxdiff[n + 1] = diff[n];
        for(i = n; i >= 1; i--)
        {
            mxdiff[i] = max(diff[i],mxdiff[i + 1]);
        }

        zero = one = 0;

        ll ans = mxdiff[1];

        for(i = 1; i <= n; i++)
        {
            ans = max(ans, mxdiff[i + 1] - diff[i]);
        }

        bool on = 1;
        for(i = 1; i <= n; i++)
        {
            if(arr[i]) ans++;
            else on = 0;
        }

        if(on) ans--;



        plld(ans);
    }
return 0;

}


