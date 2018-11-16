#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fs first
#define sec second
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a*b)/(gcd(a,b))
#define len length
#define all(v) v.begin(),v.end()
#define T ll t=0;cin>>t;for(ll test=0;test<t;test++)
#define present(v,val) find(all(v),val)!=v.end()
#define setpresent(s,val) s.find(val)!=s.end()
double Comb(int N, int k)
{
    double out=1.0;
    for(int i=0;i<k;i++)
    {
        out*=(double)(N-i)/(k-i);
    }
    return out;
}
ll dfs(const vector<ll> v[],ll p,bool visited[])
{
    visited[p]=true;
    ll count=1;
    for(ll b=0;b<v[p].size();b++)
    {
        if(visited[v[p][b]]==false)
        {
            count++;
            count+=(dfs(v,v[p][b],visited)-1);
        }
    }
    return count;
}
bool sortsec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second > b.second);
}
long long fastexp(long long int a,long long int n)
{
    long long int ans=1;
    a%=mod;
    while(n>0)
    {
        if(n&1)
            ans=(ans*a*1LL)%mod;
        n>>=1;
        a=(a*a)%mod;
    }
    return ans;
}
void isprime(ll pr[])
{
    pr[0]=1;
    pr[1]=1;
    for(ll a=2;a*a<1000001;a++)
    {
        if(!pr[a])
        {
            for(ll b=2*a;b<1000001;b+=a)
            {
                pr[b]=1;
            }
        }
    }
}
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(0);cout.tie(0);
	ll pr[1000001]={0};
	//isprime(pr);
      ll n,m,i;
      cin>>n;
      ll a[n];
      for(i=0;i<n;i++)
      {
            cin>>a[i];
      }
      cin>>m;
      ll b[m];
      for(i=0;i<m;i++)
      {
            cin>>b[i];
      }
      ll count=0,j;
      sort(a,a+n);
      sort(b,b+m);
      for(i=0;i<n;i++)
      {
            for(j=0;j<m;j++)
            {
                  if(llabs(a[i]-b[j]) <=1)
                  {
                        count++;
                        b[j] = 10000;
                        break;
                  }
            }
      }
      cout<<count<<endl;
    return 0;
}
/* SD knows this */