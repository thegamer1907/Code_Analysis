#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector< pair<int,int> > vpii;
typedef vector< pair<ll,ll> > vpll;
typedef vector< vector<int> > matrix;

#define SET(Ar,val) memset(Ar,val,sizeof(Ar))
#define rep(i,val,n)  for(int i=val;i<n;i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define LMAX LONG_LONG_MAX
#define LMIN LONG_LONG_MIN
#define IMAX INT_MAX
#define IMIN INT_MIN
#define Modulo 1000000007ll

/*--------------------------------------------------------------------------------------------------------------------------------*/

template <class T> T modpower(T a,T b,T MOD)
{
    T ans=1;
    while(b!=0)
    {
        if(b%2==1)
        ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return ans;
}

int n,m;

ll f(ll x)
{
    x-=1ll;
    ll cnt=0;
    rep(i,1,n+1)
    {
        cnt+=ll(min(ll(m),(x/i*1ll)));
    }
    return cnt;
}

void init()
{
   ll k;
   cin >> n >> m >> k ;

   //Finding largest mid , such that count of elements less than mid is < k.

   ll hi = ll(n)*ll(m) + 1ll;
   ll lo = 1,mid;
   while(lo<hi)
   {
       mid = (lo+hi)/2ll;
       if(f(mid)<k)
       {
           lo = mid+1;
       }
       else
       {
           hi = mid;
       }
   }
   // coz till mid we have less than k then afterwards lo = mid+1, hi decrease till condition in while and loop ends. mid is ans. Also hi can go till lo+1,
   // and values from [lo or mid+1 , hi] are checked
   cout << lo-1ll ;
}

int main()
{
    clock_t time1 = clock();
	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	#else
	//ONLINE_JUDGE
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    init();
    clock_t time2 = clock();
    cerr <<"Time: " <<(double)(time2-time1)/CLOCKS_PER_SEC * 100000 <<" seconds" <<endl;
	return 0;
    }
