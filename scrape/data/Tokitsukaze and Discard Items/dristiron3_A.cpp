#include <bits/stdc++.h>
    using namespace std;
    #define M 1000000007
    #define ll long long
    #define REP(i,a,b) for(ll i=a;i<b;i++)
    #define ff first
    #define ss second
    #define pb push_back
    #define mp make_pair
    #define vi vector<int>
    #define vll vector<long long>

    ll modInverse(ll a, ll m);
    ll gcd(ll a, ll b);
    ll power(ll x, unsigned ll y, unsigned ll m);
    ll logint(ll x,ll y);


    ll gcd(ll a, ll b)
    {
        if (a == 0)
            return b;
        return gcd(b%a, a);
    }

    ll power(ll x, unsigned ll y, unsigned ll m)
    {
        if (y == 0)
            return 1;
        ll p = power(x, y/2, m) % m;
        p = (p * p) % m;

        return (y%2 == 0)? p : (x * p) % m;
    }

    ll modInverse(ll a, ll m)
    {
        ll m0 = m;
        ll y = 0, x = 1;

        if (m == 1)
          return 0;

        while (a > 1)
        {
            // q is quotient
            ll q = a / m;
            ll t = m;

            // m is remainder now, process same as
            // Euclid's algo
            m = a % m, a = t;
            t = y;

            // Update y and x
            y = x - q * y;
            x = t;
        }

        // Make x positive
        if (x < 0)
           x += m0;

        return x;
    }

    void pairsort(ll a[],ll b[], ll n)
    {
        pair<ll, ll> pairt[n];

        // Storing the respective array
        // elements in pairs.
        for (ll i = 0; i < n; i++)
        {
            pairt[i].first = a[i];
            pairt[i].second = b[i];
        }

        // Sorting the pair array.
        sort(pairt, pairt + n);

        // Modifying original arrays
        for (ll i = 0; i < n; i++)
        {
            a[i] = pairt[i].first;
            b[i] = pairt[i].second;
        }
    }

    ll logint(ll x,ll y)
    {
        ll ans=0;
        ll a=1;
        for(ll i=0;i<x;i++)
        {
            if(x<=a)
            {
                return ans;
            }
            ans++;
            a*=y;
        }
        return -1;
    }
    const int MAX = 1e4 + 5;
    ll ar[150001];
    vector<ll>ans[150001];

    ll fin(ll x){
        if(x == ar[x]){
            return x;
        }
        return ar[x] = fin(ar[x]);
    }
    void uni(ll x, ll y){
        x = fin(x);
        y = fin(y);
        if(ans[x].size() > ans[y].size()){
            REP(i, 0, ans[y].size()){
                ans[x].pb(ans[y][i]);
                ar[ans[y][i]] = x;
            }
        }
        else{
            REP(i, 0, ans[x].size()){
                ans[y].pb(ans[x][i]);
                ar[ans[x][i]] = y;
            }
        }
    }

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        /*
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        */
        ll n, m, k;
        cin>>n>>m>>k;
        vector<ll>v(m);
        ll ans=0;
        REP(i, 0, m){
            cin>>v[i];
        }
        ll an=0;
        ll curr=k;
        REP(i, 0, m){
            if(v[i] > curr){
                if(i-an > 0){ans++;}
                curr += i-an;
                an = i;
                ll z = curr;
                if(v[i] > curr){
                    if((v[i]-z)%k != 0){
                        curr+=k;
                    }
                    curr += ((v[i]-z)/k)*k;
                }
            }
        }
        ans++;
        cout<<ans;
    }