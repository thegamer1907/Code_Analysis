///-------------- sea_26-----------------///


#include "bits/stdc++.h"
using namespace std;

///----------------PI--Memset--Sort-boost scan-----------

#define vsort(v)   sort(v.begin(),v.end())
#define M 1000000007
#define PI acos(-1.0)
#define bitc(n) __builtin_popcount(n)
#define fill(a,x) memset(a,x,sizeof(a))
#define fastScan ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

///---------------------data type---------------------

#define db double;
#define ldb long double;
#define ll long long int

///---------------------STL---------------------------

#define mp make_pair
#define pb push_back
#define pf push_front
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pcc pair <char, char> ;
#define pic pair <int, char> ;
#define pil pair <int, ll> ;
#define pli pair <ll, int> ;
#define pdd pair<double,double>

///-----------------------loop----------------------------

#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,a,b) for(int i=a;i<=b;i++)
#define reppi(i,a,b,c) for(int i=a;i<=b;i+=c)
#define ref(i,n) for(int i=n;i>1;i--)
#define reff(i,a,b) for(int i=a;i>=b;i--)
#define fornm(n,m) for(int i =0; i<=n; i ++) for(int j =0; j <=m; j++)
#define fornmo(n,m,o) for(int i =0; i<=n; i ++) for(int j =0; j <=m; j++) for(int k =0; k <= o; k++)


///------------------input & output------------------

#define sc(x) scanf("%d",&x)
#define scc(x1,x2) scanf("%d%d",&x1,&x2)
#define sccc(x1,x2,x3) scanf("%d%d%d",&x1,&x2,&x3)
#define scl(x) scanf("%lld",&x)
#define sccl(x1,x2) scanf("%lld%lld",&x1,&x2)
#define scccl(x1,x2,x3) scanf("%lld%lld%lld",&x1,&x2,&x3)
#define pr(x) printf("%d\n",x)
#define prl(x) printf("%lld\n",x)
#define prrl(x1,x2) printf("%lld %lld\n",x1,x2)

///------------------ GCD,LCM,MAX--------------------

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
ll lcm(int a, int b) { return (a * (b / gcd(a, b))); }
ll max(ll a,ll b,ll c){return max(a,max(b,c));}

int main()
{
      ll n;
      string str;
      cin>>str;
      n=str.size();
      if(n<7)
      cout<<"NO";
      else
      {
        if(str.find("1111111")!=string::npos||str.find("0000000")!=string::npos)
        cout<<"YES";
        else
        cout<<"NO";
      }
      cout << endl;
}
