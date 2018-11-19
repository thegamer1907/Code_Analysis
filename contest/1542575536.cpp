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
 
int main()
{
    fastScan;
    // freopen("a.in","r",stdin);
    // freopen("b.out","w",stdout);
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(s!=0){
      m+=0.5;
    }
    if(m>60)m-=60;
      m/=5;
    if(m!=0){
      h+=0.5;
      if(h>12)h-=12;
    }
    s/=5;
    double arr[3];
    arr[0]=h;
    arr[1]=m;
    arr[2]=s;
    sort(arr,arr+3);
    int f=0,f1,f2;
    rep(i,2){
      f1=0;
      f2=0;
      // cout<<i<<" "<<t1<<" "<<t2<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
      if(t1<=arr[i+1] && t1>=arr[i])f1=1;
      if(t2<=arr[i+1] && t2>=arr[i])f2=1;
      if(f1!=f2)f=1;
    }
    if(f==1)cout<<"NO";
    else cout<<"YES";
    return 0;
}