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
ll binarySearch(ll k, ll l, ll r)
{
    ll pos=0;

    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(mid==k)
            return pos;     
        else if(mid<k)
            l = mid+1;
        else
            r = mid-1;
        pos++;
    }
}


int main()
{
    FAST;

    ll n,k;
    cin>>n>>k;

    ll l = 0;
    ll r = (pow(2,n)-1)-1;
    ll idx = k-1;

    ll max = n;
    ll val = binarySearch(idx,l,r);

    cout<<n-val<<endl;

    return 0;
}
