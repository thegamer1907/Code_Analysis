#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define X first
#define Y second
#define rep(i,a) for(ll i=0;i<a;++i)
#define repp(i,a,b) for(ll i=a;i<b;++i)
#define all(c) (c).begin(), (c).end()
#define FILL(a,x) memset(a,x,sizeof(a))
#define    foreach( gg,itit ) for( typeof(gg.begin()) itit=gg.begin();itit!=gg.end();itit++ )
#define mp make_pair
#define pb push_back
#define fastScan ios_base::sync_with_stdio(0); cin.tie(NULL);
ll M=1e9+7;



ll mpe(ll base, ll exponent, ll modulus)
{  
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = result*base%modulus ;
        exponent = exponent >> 1;
        base =  base*base%modulus ;
    }
    return result;
}
ll k;
vector<vector<int> > vec;
map<vector<int>, int> mep;

bool one(){
  int n = vec.size();
  rep(i,n){
    int f=0;
    rep(j,k){
      if(vec[i][j]==1)f=1;
    }
    if(f==0)return true;
  }
  return false;
}

bool two(){
  int n = vec.size();
  rep(i,n){
    repp(j,i+1,n){
      int f=0,sum=0;
      rep(l,k){
        sum = vec[i][l]+vec[j][l];
        if(sum*2>2)f=1;
      }
    if(f==0)return true;
    }
  }
  return false;
}

bool three(){
  int n = vec.size();
  rep(i,n){
    repp(j,i+1,n){
      repp(v,j+1,n){
        int f=0,sum=0;
        rep(l,k){
          sum = vec[i][l]+vec[j][l] + vec[v][l];
           if(sum*2>3)f=1;
        }
        if(f==0)return true;
      }
    }
  }
  return false;
}

bool four(){
  int n = vec.size();
  rep(i,n){
    repp(j,i+1,n){
      repp(v,j+1,n){
        repp(vv,v+1,n){
          int f=0,sum=0;
          rep(l,k){
            sum = vec[i][l]+vec[j][l] + vec[v][l] + vec[vv][l];
             if(sum*2>4)f=1;
          }
          if(f==0)return true;
        }
      }
    }
  }
  return false;
}
 
int main()
{
    fastScan;
    // freopen("a.in","r",stdin);
    // freopen("b.out","w",stdout);
    ll n;
    cin>>n>>k;
    vector<int> tmp;
    rep(i,n){
      tmp.clear();
      rep(j,k){
        int a;
        cin>>a;
        tmp.pb(a);
      }
      if(mep.find(tmp)==mep.end()){
        vec.pb(tmp);
        mep[tmp]=1;
      }
    }
    if(one()||two()||three()||four())cout<<"YES";
    else cout<<"NO";
    
    return 0;
}