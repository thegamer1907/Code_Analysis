#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define hell 1000000007
#define PI 3.14159265358979323844
#define mp make_pair
#define pb push_back
#define fi first 
#define se second
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))  
#define REVERSE(v) reverse(ALL(v))
#define maxc(v) max_element(all(v))
#define minc(v) min_element(all(v))
#define fr first
#define sc second
#define pb push_back
#define ppb pop_back
#define maxc(v) max_element(all(v))
#define minc(v) min_element(all(v))
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) (m*n)/GCD(m,n)
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
#define initarr(a,n,x) for (int i=0;i<n;++i) a[i]=x
#define rep(i,a,n)  for(int i=a ; i<n ; i++)
#define repe(i,a,n) for(int i=a;i<=n;i++)
#define ll long long
#define ld long double 
#define pii std::pair<int, int> 
#define pll std::pair<ll, ll>  
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
#define sz(a) (int)a.size()
#define sl(a) (int)a.length() 
#define itv for(auto it= v.begin(); it != v.end(); ++it )
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(ALL(container),element) != container.end())
//#define invect(data,n,commands) for(int i = 0;i<n;i++){int tmp;cin>>tmp;data.pb(tmp);commands}
//#define inset(data,n,commands) for(int i = 0;i<n;i++){int tmp;cin>>tmp;data.insert(tmp);commands}
//#define trav(a, x) for(auto& a : x)
//#define display(x) trav(a,x) cout<<a<<" ";cout<<endl
#define r0 return 0
#define U 998244353
 
#define bs binary_search
#define sqr(a) a*a
#define dbg cout<<"hi";
 
int mod(int n)
{
if(n>=0)
  return n;
else
  return (-n);
}
 
 
 
void solve()
{
ll int n; 
int m,k; cin>>n>>m>>k;
 
vi v(m);
 
rep(i,0,m)
cin>>v[i];
 
int i=0,p=0,co=0,ans=0;
 
while(i!=m)
{
int c1=0;
 
int d=(v[i]-p-1)/k;
 
int l=d*k+1;
 
int r=(d+1)*k;
 
//cout<<l<<" "<<v[i]-p<<" "<<v[i]<<" "<<r<<endl;
 
while((v[i]-p<=r)&&(i<m))
{
i++;
c1++;
}
 
p=i;
//cout<<c1;
 

 
if(c1!=0)
ans++;
 
 
 
}
 
 
 
 
cout<<ans;
 
 
 
}
 
 
 
  int main()
{ 
   FAST
   //generatePrimeFactors();
   int t;                  
    //cin>>t;
    t=1;
    while(t--)
    {
        
        solve();
}
 
   r0;
}