#include <bits/stdc++.h>
using namespace std;
#define pf                  printf()
#define sc1(a)              scanf("%d",&a)
#define sl1(a)              scanf("%lld",&a)
#define sc2(a,b)            scanf("%d %d",&a,&b)
#define sl2(a,b)            scanf("%lld %lld",&a,&b)
#define sc3(a,b,c)          scanf("%d %d %d",&a,&b,&c)
#define sl3(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define sc4(a,b,c,d)        scanf("%d %d %d %d",&a,&b,&c,&d)
#define sl4(a,b,c,d)        scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sc5(a,b,c,d,e)      scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sl5(a,b,c,d,e)      scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define scc(a)              scanf("%c",&a)
#define pr                  pair<int,int>
#define ms(a,b)             memset(a,b,sizeof(a))
#define pb(a)               push_back(a)
#define pp(a,b)             push_back(make_pair(a,b))
#define pbp(a,b)            push_back({a,b})
#define db                  double
#define ft                  float
#define ll                  long long
#define ull                 unsigned long long
#define ff                  first
#define ss                  second
#define sz(x)               x.size()
#define all(v)              v.begin(),v.end()
#define CIN                 ios_base::sync_with_stdio(0); cin.tie(0)
#define max3(a, b, c)       max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)       min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define f0(i,n)             for(i=0;i<n;i++)
#define f1(i,n)             for(i=1;i<=n;i++)
#define frev(i,n)           for(int i=n-1; i>=0; i--)
#define frab(i,a,b)         for(int i=a;i<=b;i++)
#define frba(i,b,a)         for(int i=b;i>=a;i--)
#define stlloop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<<": "
#define case2(z)            printf("Case %d: ",z)
#define PI                  acos(-1) //3.14159265358979323846264338328
#define valid(tx,ty)        tx>=0 && tx<row && ty>=0 && ty<col
#define intlim              2147483648
#define sz1                 100005
#define sz2                 200005
#define lm                  100005
#define inf                 100000008
#define MOD                 1000000007
#define vp                  vector<pair<int,int> >
///ll p=ceil(log(16)/log(2)); //2^N=16,N=?
///sort(a,a+n,greater<int>());
///log10(i)+1  (digit)
//template <typename T> inline T BigMod(T A,T B,T M = MOD){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
//template <typename T> inline T InvMod (T A,T M = MOD){return BigMod(A,M-2,M);}
int main()
{
  int n,m,i,mx,b[105];
  while(cin>>n)
  {
      cin>>m;
      mx=0;
      f0(i,n)
      {
          cin>>b[i];
          mx=max(mx,b[i]);
      }
      int sum=0;
      f0(i,n)
      {
          sum+=(mx-b[i]);
      }
      if(m<=sum)
      {
          cout<<mx<<" "<<mx+m<<endl;
      }
      else
      {
          int m1=m;
          m1-=sum;
          if(m1%n==0)
            m1=m1/n;
          else
            m1=(m1/n)+1;
         cout<<mx+m1<<" "<<mx+m<<endl;

      }
  }
}
