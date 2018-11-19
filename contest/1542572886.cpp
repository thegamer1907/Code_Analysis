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
int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(s)
    {
       m+=0.1;
      
      // dbg(m);
	}
	 if(m>60) m-=60;
       m/=5.0;
      // dbg(m);
	if(m)
	{
	   h+=0.1;
	   if(h>12) h-=12;
	}
    s/=5.0;
    //dbg2(h,m,s);
    double a[5];
    //cout<<t2<<endl;
    a[0]=s,a[1]=m,a[2]=h,a[3]=t1,a[4]=t2;
    sort(a,a+5);
    //dbg2(a[0],a[1],a[2]);
    ll id1,id2;
    rep(i,5)
	{
	   if(t1==a[i])
	   id1=i;
	   if(t2==a[i])
	   id2=i;
	  // cout<<"vai"<<t2<<" "<<a[i]<<endl;
	}  
	//dbg1(id1,id2);
//	cout<<id1<<" "<<id2<<endl;
	if(abs(id1-id2)==1 || abs(id1-id2)==4)
	cout<<"YES";
	else
	cout<<"NO"; 
}