/****************************************************************************************
 *                                                                                       *
 *   #######             ###############          #       #           #           #      *
 *   #      #                  #                  #     #             #           #      *
 *   #       #                 #                  #   #               #           #      *
 *   #        #                #                  # #                 #           #      *
 *   #        #                #                  #                   #           #      *
 *   #        #                #                  # #                 #           #      *
 *   #       #                 #                  #   #               #           #      *
 *   #      #                  #                  #     #             #           #      *
 *   #######             ##############           #       #           #############      *
 *                                                                                       *
 ****************************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll>
#define vl vector<ll>
#define vll vector<pll>
#define um unordered_map<ll,ll>
#define mll map<ll,ll>
#define pq priority_queue<ll>
#define pql priority_queue<ll,vector<ll>,greater<ll>>

#define rp(i,b) for(i=0;i<b;i++)
#define rpi(i,a,b) for(i=a;i<b;i++)
#define lct long long t;cin>>t;while(t--)
#define ia(a,n) vl a;for(ll i=0;i<n;++i) {ll x;cin>>x;a.pb(x);}
#define ian(a,n) ll n;cin>>n;vl a;for(ll i=0;i<n;++i) {ll x;cin>>x;a.pb(x);}
#define iam(a,n,m1) vl a;map<ll,ll>m1;for(ll i=0;i<n;++i) {ll x;cin>>x;a.pb(x);m1[x]++;}
#define ianm(a,n,m1) ll n;cin>>n;vl a;map<ll,ll>m1;for(ll i=0;i<n;++i) {ll x;cin>>x;a.pb(x);m1[x]++;}
#define ia2(a,m,n) ll m,n;cin>>m>>n;ll a[m+4][n+4];for(ll i=0;i<m;++i)for(ll j=0;j<n;++j)cin>>a[i][j];
#define is(s,n,m1) string s;cin>>s;map<char,ll>m1;ll n;n=s.size();for(auto it:s)m1[it]++;

#define pa(a,n) for(ll i=0;i<n;++i) cout<<a[i]<<" ";cout<<endl;
#define pa2(a,m,n) for(ll i=0;i<m;++i){for(ll j=0;j<n;++j)cout<<a[i][j]<<" ";cout<<endl;}
#define pd(z,k) cout<<fixed<<setprecision(k)<<z<<endl;

#define pb push_back
#define all(c)    (c).begin(),(c).end()
#define lb(c,x) lower_bound(all(c),x)-c.begin()
#define up(c,x) upper_bound(all(c),x)-c.begin()
#define F first
#define S second


const long long mod = 1e9+7;
const long long M = 1e6+5;
const double pi=acos(-1.);
const long long dx[]={1,0,-1,0,-1,-1,1,1};
const long long dy[]={0,1,0,-1,1,-1,1,-1};

ll b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,maxi,mini,ans,mid,low,high;
string s1,s2;

bool solve(ll ma)
{
	z=n;p=0;
	while(1)
	{
		if(p>=n/2)
			return true;
		if(ma<=z)
		p+=ma,z-=ma;
	    else
	    {
	    	p+=z;z=0;
	    	break;
	    }
	   
        z-=z/10;
	}
	if(p>=n/2)
			return true;
	return false;


}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin >> n;
    ll lo = 1, hi = 2e18;
    while (lo < hi) {
        ll mid = (lo + hi)/2;
        ll tmp = n;
        ll x = 0, y = 0;
        while (tmp) {
            x += min(mid, tmp);
            tmp -= min(mid, tmp);
            y += tmp / 10;
            tmp -= tmp / 10;
        }
        //cout << mid << ' ' << x << ' ' << y << endl;
        if (x >= y) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
    return 0;
}
