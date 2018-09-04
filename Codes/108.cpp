//SMIT DETROJA
    //201601113

    #include <map>
    #include <queue>
    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <string.h>
    #include <iostream>
    #include <algorithm>
    #include <utility>
    #include <bits/stdc++.h>

    #define mod 1000000007
    #define ll long long
    #define ld long double
    #define sp " "

    #define gll(a,n) For(i,0,n) cin>>a[i];

    #define pi(x) printf("%lld ",x)

    #define mst(a,b) memset(a,b,sizeof a);
    #define pline printf("\n")

    #define For(i,a,b) for(ll i=a;i<b;i++)
    #define RFor(i,a,b) Rfor(ll i=a;i>=b;i--)

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
    #define mp make_pair
    #define fir first
    #define sec second


    #define INF 999999999999999999
    #define nax 100010

    using namespace std;

    typedef pair<ll,ll> pp;

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

   /* void setprime()
    {
        bool isprime[1000005];
        For(i,0,2000005)
            isprime[i]=true;
            isprime[0]=false;
            isprime[1]=false;

        For(i,2,2000005)
        {
            for(ll j=2;i*j<2000005;j++)
                isprime[i*j]=false;
        }
    }
*/
    ll choose(ll n,ll k)
    {
        if(k==0)
            return 1;
        return (n* choose(n-1,k-1))/k;
    }

    /*
    bool isprime(ll n)
    {
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    */

    ll gcd(ll a, ll b)
    {
        if (!a)
        return b;
        return gcd(b%a,a);
    }

    int main()
    {
    //===========================================================================================================================================================================
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        //cout.precision(12);

    ll n,sum=0,p=0,q=0,temp,count=0,flag=0;
    cin>>n;

    ll b[n];

    For(i,0,n)
    {
        cin>>temp;
        sum = sum + temp;
        if(i==0)
            b[i] = temp;
        else
            b[i] = b[i-1] + temp;
    }

    if(sum%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(sum==0)
    {
        For(i,0,n)
        {
            if(b[i]==0)
                count++;
        }
            count=count-3;

            cout<<((count+2)*(count+1))/2<<endl;
            return 0;
    }
    else
    {
        sum=sum/3;

        For(i,0,n)
        {
            if(b[i]==sum)
                p++;
            if(b[i]==2*sum)
            {
                q+=p;
            }

        }

        cout<<(q)<<endl;
        return 0;
    }

	return 0;

    //===========================================================================================================================================================================
    }
