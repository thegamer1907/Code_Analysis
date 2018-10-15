#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define inf (1LL<<61)
#define vi vector<int>
#define vl vector<long long>
#define vvi vector< vector<int> >
#define vvl vector< vector<long long> >
#define vpi vector< pair<int,int> >
#define vpl vector< pair<ll,ll> >
#define N 1000001
ll ts,ps;
string t,p;
vl a;
bool istrue(ll m)
{
    string t1=t;
    for(ll i=0;i<m;i++)
    {
        t1[a[i]-1]='$';
    }
    ll i=0;ll j=0;
    for(;i<ts and j<ps;)
    {
        if(t1[i]==p[j])
            {
                i++;j++;
            }
        else
            i++;
    }
    if(j==ps)
        return true;
    else
        return false;
}

ll x;
ll ans=0;
int main()
{
    cin>>t>>p;
    ts=t.size();
    ps=p.size();
    ll start=1;
    ll end1=ts;
    for(ll i=0;i<ts;i++)
    {
        cin>>x;
        a.pb(x);
    }
    while(start<=end1)
    {
        ll mid=(start+end1)/2;
       // trace1(mid);
        if(istrue(mid)==true)
        {
            ans=max(mid,ans);
            start=mid+1;
        }
        else
        {
            end1=mid-1;
        }
    }
    cout<<ans;

            return 0;
}

