#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
// #include <boost/multiprecision/cpp_int.hpp> 

#define gc getchar//_unlocked
#define pc putchar//_unlocked
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pp pair<int,int>
#define ppl pair<ll,ll>
#define bigint boost::multiprecision::cpp_int
#define finp ios_base::sync_with_stdio(0);cin.tie(0);
#define bc __builtin_popcountll
#define afor(i,a,b) for(int i=a;i<=b;++i)
#define bfor(i,a,b) for(int i=a;i>=b;--i)
#define vi vector<int>
#define vpp vector<pp>
#define vll vector<ll>

using namespace std;
using namespace __gnu_pbds;

char putnb[20];
void putn(ll n) {if(!n)pc('0');if(n<0)pc('-'),n=0-n;int pi=0;while(n)putnb[pi++]=(n%10)+'0',n/=10;while(pi)pc(putnb[--pi]);}
void sci(int *x) {register char c = gc();*x = 0;for(; (c<48)||(c>57);c = gc());for(; (c>47)&&(c<58);c = gc())*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);}
void scll(ll *x)  {register char c = gc();*x = 0;for(; (c<48)||(c>57);c = gc());for(; (c>47)&&(c<58);c = gc())*x =  (ll)((((*x)<<1) + ((*x)<<3)) + c - 48);}
ll fp(ll a,ll b,ll c) {if(b==0)return 1%c; if(b==1)return a%c; ll ret=fp(a,b/2,c); ret=(ret*ret)%c; if(b&1)ret=(ret*a)%c; return ret;}

const ll mod=1e9 +7;
const ll mod2=1999999973;
const ll inf=1e18;
const int infs=1e9 + 1000;
const int N=100000;
const long double PI = acos(-1);

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
  finp;
  bool tot = false;
  bool las = false;
  bool fir = false;
  string pas;
  cin>>pas;
  int n;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    if(s == pas)tot = true;
    if(s[0] == pas[1])fir = true;
    if(s[1] == pas[0])las = true;
  }

  if(tot || (las && fir))cout<<"YES";
  else cout<<"NO";
  
return 0;
}