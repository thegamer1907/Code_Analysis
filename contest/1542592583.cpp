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
ll aage[300],piche[300]; 
int main()
{
    fastScan;
    // freopen("a.in","r",stdin);
    // freopen("b.out","w",stdout);
    string str,tmp;
    cin>>str;
    ll n,f=0;
    cin>>n;
    rep(i,n){
      cin>>tmp;
      if(tmp==str)f=1;
      aage[tmp[0]]=1;
      piche[tmp[1]]=1;
    }
    if((aage[str[1]] && piche[str[0]]) || f)cout<<"YES";
    else cout<<"NO";
    
    return 0;
}