//SMIT DETROJA
    //201601113
    #include <bits/stdc++.h>

    #define mod 1000003
    #define ll long long
    #define ld long double
    #define sp " "

    #define mst(a,b) memset(a,b,sizeof a);

    #define For(i,a,b) for(ll i=a;i<b;i++)

    #define precision(x,d) cout<<fixed<<setprecision(d)<<x
    #define minQueue priority_queue<ll,vector<ll>,greater<ll> >
    #define maxQueue priority_queue<ll,vector<ll>,less<ll> >

    #define deb1(x)                cout<<#x<<": "<<x<<endl
    #define deb2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
    #define deb3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
    #define deb4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
    #define deb5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
    #define deb6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

    #define pb push_back
    #define pf push_front
    #define mp make_pair
    #define ff first
    #define ss second

    #define INF 9999999
    #define nax 1000010

    using namespace std;

    /*
        For(i,0,m)
        {
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(make_pair(1,v));
            adj[v].push_back(make_pair(1,u));
        }

        ll a,b;
        cin>>a>>b;

        vector<ll> dist1 = dijkstra(a,n,adj);

    */
    /*
    vector<ll> dijkstra(ll src, ll n ,vector<pair<ll,ll> > adj[])
    {
        vector<ll> dist;
        bool visited[n];
        for(ll i=0;i<n;i++)
        {
            dist.push_back(INF);
            visited[i]=false;
        }

        dist[src]=0;
        multiset<pair<ll,ll> > s;
        s.insert(make_pair(0,src));
        while(!s.empty())
        {
            pair<int,int> temp = *s.begin();
            s.erase(s.begin());
            ll u = temp.second;

            if(visited[u])
                continue;
            visited[u]=true;

            for(ll i=0;i<adj[u].size();i++)
            {
                ll w = adj[u][i].first;
                ll v = adj[u][i].second;
                if(dist[u]+w<dist[v])
                {
                    dist[v]=dist[u]+w;
                    s.insert(make_pair(dist[v],v));
                }

            }
        }
        return dist;
    }

    */

    ll gcd(ll a, ll b)
    {
        if (!a)
        return b;
        return gcd(b%a,a);
    }

    ll gcdExtended(ll a, ll b, ll *x, ll *y){
    if (a == 0){
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}

    ll modInv(ll a, ll m){
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    ll res = (x%m + m) % m;
    return res;
}

ll mpower(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1){
            res = (res*x) % p;
        }
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

ll power(ll x, ll y){
    ll res = 1;
    while (y > 0){
        if (y & 1)
            res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}

    int main()
    {
    //===========================================================================================================================================================================
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        //cout.precision(12);

        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll count = 0;

        map<ll,ll> hm;

        hm[0]++;

        ll ans = 0;

        For(i,0,s.size())
        {
            if(s[i] ==  '1')
            {
                count++;
            }

            if(count>=n)
            {
                ans += hm[count - n];
            }

            hm[count]++;

        }

        cout<<ans;

    //===========================================================================================================================================================================
    }
