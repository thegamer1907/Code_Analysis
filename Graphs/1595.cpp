#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false),cin.tie(0)
#define all(c) c.begin(),c.end()
#define rep(i,c,n) for(i=c;i<n;i++)
#define dw(t) while (t--)
#define PB push_back
#define MP make_pair
#define F first
#define S second
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef unsigned long long ull;
typedef long long ll;
#define MOD 1000000007
bool sieve[1000001];
void init(){
  long long i,j;
  sieve[0]=true;
  sieve[1]=true;
  rep(i,2,1000001)
  {
    if(!sieve[i])
    {
      for(j=2*i;j<1000001;j+=i)
        sieve[j]=true;
    }
  }
}
long long power(long x,long n){
  if(n==0)
    return 1;
  if(n==1)
    return x;
  long n2 = n/2;
  long long po = power(x,n2);
  if(n%2)
    return po*po*x;
  return po*po;
}
long long gcd(long long a , long long b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
long long lcm(long long a,long long b)
{
  return a*b/gcd(a,b);
}

int main(){
  boost();
  int n,t,i;
  cin>>n>>t;
  vector<int> v(n-1);
  rep(i,1,n)
    cin>>v[i-1];
  bool vis[n];
  fill(vis,vis+n,false);
  vis[0] = true;
  rep(i,0,n)
  {
    if(vis[i] && i+1<n){
      vis[i+v[i]]=true;
    }
  }
  if(vis[t-1])
    cout<<"YES\n";
  else
    cout<<"NO\n";
  return 0;
}
