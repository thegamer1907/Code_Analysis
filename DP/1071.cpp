#include <bits/stdc++.h>`

#define slld(longvalue) scanf("%lld", &longvalue)
#define plld(longvalue) printf("%lld\n", longvalue)

#define ll long long


#define maxn 105

using namespace std;

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


