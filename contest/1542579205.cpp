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

int n,m;
string ss[505];
set<int> dp[505][15];

int main()
{
  finp;
  cin>>n;
  afor(i,1,n)
  {
    string s;
    cin>>s;
    int nn = s.size();

    afor(j,1,nn)afor(k,j,min(nn,j+12))
    {
      int bit = 0;
      afor(jj,j-1,k-1)
      {
        bit*=2;
        if(s[jj] == '1')bit+=1;
      }
      dp[i][k-j+1].insert(bit);
    }
    if(nn <= 26)ss[i] = s;
    else 
    {
      ss[i] = s.substr(0,13);
      ss[i].append(s.substr(nn-13,13));
    }
  }

  cin>>m;
  afor(i,n+1,n+m)
  {
    int a,b;
    cin>>a>>b;
  
    int n1 = ss[a].size();
    int n2 = ss[b].size();

    string s = ss[a];
    s.append(ss[b]);

    int nn = s.size();

    if(s.size() <= 26)
    {
      ss[i] = s;
    }
    else
    {
      ss[i] = s.substr(0,13);
      ss[i].append(s.substr(nn-13,13));
    }
    s = ss[i];
    nn = s.size();
    

    afor(len,1,13)dp[i][len] = dp[a][len];
    afor(len,1,13)for(auto j:dp[b][len])dp[i][len].insert(j);

    afor(j,max(n1-12,1),n1)afor(k,1,min(n2,13))
    {
      if((k+n1-j+1)>13)continue;

      int bit = 0;
      afor(jj,j-1,n1-1)
      {
        bit*=2;
        if(ss[a][jj] == '1')bit+=1;
      }
      afor(jj,0,k-1)
      {
        bit*=2;
        if(ss[b][jj] == '1')bit+=1;
      }
      dp[i][k+n1-j+1].insert(bit);
    }


    int ans = 0;
    afor(j,1,13)
    {
      if(dp[i][j].size() == (1 << j))ans = j;
      else break;
    }
    assert(ans != 13);
    cout<<ans<<"\n";
  }
  
return 0;
}