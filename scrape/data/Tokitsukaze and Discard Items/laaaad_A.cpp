#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef pair <int, int> pii;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define sz(a) (ll)(a.size())
#define endl "\n"

ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }

    return gcd(b, a%b);
}

const ll L = 1e5+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll n, m, k;
    cin >> n >> m >> k;

    vector <ll> p;

    for(ll i=0; i<m; i++)
    {
        ll a;
        cin >> a;

        p.pb(a);
    }

    ll temp = k;

    ll rem = 0;

    ll ans = 0;

    ll check = 0;

    ll ind = 0;

    while(ind < m)
    {
        while(ind < m)
        {
            while(p[ind] - rem <= k)
            {
                check++;
                ind++;

                if(ind == m)
                {
                    break;
                }
            }

            if(check == 0)
            {
                break;
            }

            ans++;
            rem+=check;
            check = 0;
        }

        if(ind == m)
        {
            break;
        }

        if((p[ind]-rem)%temp == 0)
        {
            k = p[ind]-rem;
        }

        else
        {
            k = p[ind]-rem - (p[ind]-rem)%temp + temp;
        }
    }

    cout << ans << endl;



    return 0;
}