#include <bits/stdc++.h>
#include <set>
#include <iterator>
using namespace std;

const int mod = 1e9 + 7;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()

#define ll long long int
#define vi vector<int>
#define vii vector<pair<int,int> >
#define pii pair<int,int>
#define plii pair<pair<ll, int>, int>
#define piii pair<pii, int>
#define viii vector<pair<pii, int> >
#define vl vector<ll>
#define vll vector<pair<ll,ll> >
#define pll pair<ll,ll>
#define pli pair<ll,int>
#define mp make_pair
#define ms(x, v) memset(x, v, sizeof x)
#define pr_vec(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;

#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)

#define fr(i, a, b) for(i=a; i<=b; i++)
#define fb(i, a, b) for(i=a; i>=b; i--)
#define ASST(x, l, r) assert( x <= r && x >= l )

// const ll M=19;
// ll power(ll a,ll n)
// {
//   if(n==0)
//     return 1;
//   else if(n==1)
//   return n;
//   ll z=power(a,n/2);
//   if(n&1)
//     return ((z%M*z%M)%M*a%M)%M;
//   else
//     return (z%M*z%M)%M;
// }
// bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b){
//       return a.second>b.second;
// }

// vl a(1000000)      ;
// vector<bool> mark(2000100,1);

// void dfs(int src,vector<vector<int>> &g, vector<bool> &vis){

//   vis[src]=true;

//   for(int i=0;i<g[src].size();i++){
//     if(!vis[g[src][i]]){
//       dfs(g[src][i],g,vis);
//     }
//   }
//   // return 0;
// }
 /*int findAns(vector<int> &a){
   int ans;
   vector<int> pr;
   pr.pb(2);
   for(int i=3;i<50;i++){
     if(isPrime(i))
      pr.pb(i);
   }
   for(int i=0;i<pr.size();i++){
     int ctr=0;
     for(int j=0;j<a.size();j++){
       if(a[i]%pr[i]==0)
        ctr++;
     }
     if(ctr==0)
      return ctr;
   }
 }*/

// ll count(ll n){
//   ll c=0;
//   while(n){
//     c+=n%10;
//     n/=10;
//   }
//   return c;
// }


   ll dp[100009][2];
int main(){
ios_base::sync_with_stdio(0);
  ll n;
  cin >> n;
  vl a(n);
  ll i,c=0;
  vl b(n);
  for(i=0;i<n;i++){
    cin >> a[i];
    if(a[i])
      c++;
    if(a[i])
      b[i]=-1;
    else
      b[i]=1;
  }
  vl k(n+1,0);
  for(i=1;i<=n;i++){
    k[i]=max(k[i-1]+b[i-1],b[i-1]);
  }
  ll m=INT_MIN;
  for(i=1;i<=n;i++)  
    m=max(m,k[i]);
  if(m==-1)
    cout << c-1;
  else 
  cout << c+m;
  return 0;
  
}
