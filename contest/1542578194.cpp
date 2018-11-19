#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,n) for(ll i=0;i<n;i++)
#define repp(i,a,b) for(ll i=a;i<=b;i++)
#define reff(i,a,b) for(ll i=a;i>=b;i--)
#define ll long long int
#define pll pair<ll,ll>
#define fill(a,x) memset(a,x,sizeof(a))
#define mb make_pair
#define pb push_back
#define F first
#define S second
#define M 1000000007
#define sc(x) scanf("%lld",&x)
#define scc(x1,x2) scanf("%d%d",&x1,&x2)
#define sccc(x1,x2,x3) scanf("%d%d%d",&x1,&x2,&x3)
#define pr(x) printf("%lld ",x)
#define dbg(a)         std::cerr<<#a<<"="<<(a)<<"\n"
#define dbg1(a,b)       std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<"\n"
#define dbg2(a,b,c)     std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define dbg3(a,b,c,d)   std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"
#define co cout<<"fuck"<<endl;
const int INF = 2034567891;
const ll INF64 = 4234567890123456789ll;
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); }
vector<vector<ll> >v;
set<ll> s;
ll k;
bool solve()
{
    ll t=v.size();
    rep(i,t)
    {
      ll sum=0;
      rep(j,k)
      {
         sum+=v[i][j];
	  }
	  if(!sum) return true;
	}
	rep(i,t)
    {
        repp(j,i+1,t-1)
        {
           ll sum=0,f=0;
           rep(l,k)
           {
              sum=v[i][l]+v[j][l];
              if(sum>1) f=1;
		   }
		   if(!f) return true;
		}
	}
	rep(i,t)
    {
        repp(j,i+1,t-1)
        {
          repp(m,j+1,t-1)
          {
            ll sum=0,f=0;
             rep(l,k)
             {
              sum=v[i][l]+v[j][l]+v[m][l];
              if(sum>1) f=1;
		     }
		    if(!f) return true;
		   }
		}
	}
	rep(i,t)
    {
        repp(j,i+1,t-1)
        {
          repp(m,j+1,t-1)
          {
            repp(p,m+1,t-1)
            {
               ll sum=0,f=0;
               rep(l,k)
               {
                sum=v[i][l]+v[j][l]+v[m][l]+v[p][l];
                if(sum>2) f=1;
		       }
		       if(!f) return true;
		   }
		}
	   }
	}
	return false;
}
int main()
{
    fast;
    ll n,x;
	cin>>n>>k;
	rep(i,n)
	{
	   vector<ll>tm;
	   rep(j,k)
	   { 
	       cin>>x;
	       tm.pb(x);
	   }
	   ll no=0,l=0;
	   reff(p,tm.size()-1,0)
	   {
	      if(tm[p]==1)
	      no+=pow(2,l);
	      l++;
	   }
	   if(s.find(no)==s.end())
	   {
	       s.insert(no);
	       v.pb(tm);
	   } 
	}
	if(solve())
	cout<<"YES";
	else
	cout<<"NO";   
}