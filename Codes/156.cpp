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

#define printcase(indexing,ans) printf("Case %lld: %lld\n", indexing, ans)

#define pb(x) push_back(x)

#define bug printf("BUG\n")

#define mxlld LLONG_MAX
#define mnlld -LLONG_MAX

#define mxd 2e8
#define mnd -2e8

#define pi 3.14159265359

#define mod 1000000009


using namespace std;
vector < ll > v;

int main()
{
    ll i, j, k, l, m, n, o;
    ll testcase;
    ll input, flag, tag, ans;

    // freopen("in.txt", "r", stdin);

    v.clear();
    slld(testcase);

    for(ll cs = 1; cs <= testcase; cs++)
    {
        slld(input);
        v.pb(input);

        if(cs == 1) continue;

        v[cs - 1] += v[cs - 2];
    }

    slld(testcase);
    for(i = 1; i <= testcase; i++)
    {
        slld(input);

        ans = lower_bound(v.begin(),v.end(),input) - v.begin();

//        ans++;
//
//        ll sz = v.size();
//        ans = min(ans,sz);

        cout << ans + 1 << endl;
    }


}


