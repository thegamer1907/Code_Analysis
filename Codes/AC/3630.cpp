#include <bits/stdc++.h>

#if DEBUG && !ONLINE_JUDGE
    #include "debug.h"
#else
    #define debug(...)
#endif

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define scd(t) scanf("%d",&t)
#define scld(t) scanf("%ld",&t)
#define sclld(t) scanf("%lld",&t)
#define scc(t) scanf("%c",&t)
#define scs(t) scanf("%s",t)
#define scf(t) scanf("%f",&t)
#define sclf(t) scanf("%lf",&t)
#define mem(a, b) memset(a, (b), sizeof(a))
#define repd(i,k) for(ll i=k;i>=0;i--)
#define rep(i,k) for(ll i=0;i<k;i++)
#define repn(i,k1,k2) for(ll i=k1;i<=k2;i++)

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define in(A, B, C) assert( B <= A && A <= C)
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define ee6 (ll)1000001
#define ee5 (ll)100001
#define read(type) readInt<type>()
#define tt ll t;cin>>t; while(t--)
typedef long long int ll;

typedef pair<ll, ll> pr;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pr> vpr;
typedef vector<vpr>vvpr;
typedef vector<vi> vvi;
typedef map<ll,ll> MPII;
typedef set<ll> SETI;
typedef multiset<ll> MSETI;

ll powmod(ll base,ll pow)
{
   ll res=1;
   while(pow)
   {
         if (pow%2!=0)  res=(res*base)%MOD;
         base=(base*base)%MOD;
         pow/=2;
   }
   return res;
}

bool compare(pr a,pr b)
{
	return a.first<b.first;
}
ll a[2*ee5],cost1[2*ee5],cost2[2*ee5],c[2*ee5],minrates[2*ee5];vpr fir;
int main()
{
	#if !ONLINE_JUDGE
	freopen("C:/Users/hp/Desktop/CPP/PRACTICE/data.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n,m,k;cin>>n>>m>>k;
	ll x,s;cin>>x>>s;ll reqsec=x*n;
	rep(i,m)cin>>a[i];rep(i,m)cin>>cost1[i];rep(i,m){fir.pb(mp(cost1[i],a[i]));if(cost1[i]<=s)reqsec=min(reqsec,a[i]*n);}
	sort(all(fir));
	rep(i,m){minrates[i]=(i==0)?fir[i].second:min(minrates[i-1],fir[i].second);}
	
	rep(i,k)cin>>c[i];rep(i,k)cin>>cost2[i];
	
	rep(i,k)
	{
		ll remcost=s-cost2[i];
		if(remcost<0)continue;
		reqsec=min(reqsec,(n-c[i]>0?n-c[i]:0)*x);
		vector<pr>::iterator it=upper_bound(fir.begin(),fir.end(),mp(remcost,-1),compare);
		//cout<<remcost<<" REMCOST "<<it->first<<" "<<it->second<<" ";
		if(it==fir.begin())
		continue;it--;ll index=it-fir.begin();//cout<<index<<" ";
		ll newrate=minrates[index];//cout<<newrate<<" "<<n-c[i]<<"\n";
		reqsec=min(reqsec,(n-c[i]>0?n-c[i]:0)*newrate);
	}
	
	cout<<reqsec;
}
