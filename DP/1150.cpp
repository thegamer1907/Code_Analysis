#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define ms(s, n) memset(s,n,sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define all(x) x.begin(),x.end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
#define prec(n) fixed<<setprecision(n)
 
ll fpow(ll n,ll k,ll p = MOD){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%p;n=n*n%p;}return r;}
ll inv(ll a,ll p=MOD){return fpow(a,p-2,p);}
ll Sqrt(ll x){if(x==0 || x==1)return x;ll start=1,end=x,ans;while(start<=end){ll mid=(start+end)/2;if(mid*mid==x)return mid;if(mid*mid<x){start=mid+1;ans=mid;}else end=mid-1;}return ans;}
ll power(ll x,ll y){if (y==0)return 1;else if (y%2==0)return power(x,y/2)*power(x,y/2);else return x*power(x,y/2)*power(x,y/2);}  
ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b; b=r;} return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
void in(ll &no){bool neg=false;register ll c;no=0;c=getchar();if(c=='-'){neg=true;c=getchar();}for(;(c>47&&c<58);c=getchar())no=no*10+c-48;if(neg)no*=-1;}



int main() {  
  ll n;
    cin>>n;
    int a[n];
    int one=0;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]){
            one++;
            b[i]=-1;
        }
        else
            b[i]=1;
    }
    int sum=0,ans=-1e5;

    for(int i=0;i<n;i++)
    {
              sum=sum+b[i];
         if(ans<sum)
        {
            ans=sum;
          
            
        }
        if(sum<0)
        {
            sum=0;
           
        }
 
       
        
    }
  //  cout<<ans<<"\n";
    cout<<one+ans;
    return 0;
}