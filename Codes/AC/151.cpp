// Brijesh Panara (201601074)
// DAIICT (India)
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> > 
#define maxQueue priority_queue<ll,vector<ll>,less<ll> > 

#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define RFOR(i,a,b) for(ll i=a;i>b;i--)
#define FILL(a,b) memset((a),(b),sizeof((a)))
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));

#define deb1(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;

#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

//search x in array a[] between index [l,r] including l and r
ll binarySearch(ll a[],ll x, ll l, ll r)
{
    ll pos=-1;

    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(a[mid]<x)
        {
            pos = mid;
            l = mid+1;
        }
        else
            r = mid-1;
    }

    return pos;
}


int main()
{
    FAST;

    ll n;
    cin>>n;

    ll a[n];
    ll sum[n];
    FOR(i,0,n)
    {
        cin>>a[i];
        if(i==0)
            sum[i]=a[i];
        else
            sum[i]=a[i]+sum[i-1];
    }

    ll q;
    cin>>q;

    while(q--!=0)
    {
        ll temp;
        cin>>temp;

        ll pos = binarySearch(sum,temp,0,n-1);
        cout<<pos+1+1<<endl;
    }

    return 0;
}
