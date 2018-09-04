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


using namespace std;

ll n, m;
ll arr[100005];

vector < ll > vec;


bool check(ll mid)
{
    vec.clear();
	ll i, tot = 0;
	for(i = 1; i <= n; i++)
    {
        vec.push_back(arr[i] + (i * mid));

    }

    sort(vec.begin(),vec.end());


    for(i = 0; i < mid; i++)
    {
        tot += vec[i];
    }

    return tot <= m;
}

ll getans(ll mid)
{
    ll i, tot = 0;

    vec.clear();
	for(i = 1; i <= n; i++)
    {
        vec.push_back(arr[i] + (i * mid));
    }

    sort(vec.begin(),vec.end());


    for(i = 0; i < mid; i++)
    {
        tot += vec[i];
    }

    return tot;
}



int main()
{
    ll i, j, k, l, o;
    ll testcase;
    ll input, flag, tag, ans;

    // freopen("in.txt", "r", stdin);

    while(cin >> n >> m)
    {
        ll low = 1;
        ll high = n;

        for(i = 1; i <= n; i++) slld(arr[i]);

        ans = 0;

        while(low <= high)
        {
            ll mid = (low + high) / 2;

            if(check(mid))
            {
                low = mid + 1;
                ans = mid;
            }
            else
            {
                high = mid - 1;
            }
        }

        if(ans == 0)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        cout << ans << " " << getans(ans) << endl;
    }


}
