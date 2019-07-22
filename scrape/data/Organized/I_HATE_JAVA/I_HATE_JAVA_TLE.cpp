#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
typedef pair<ll,ll> pll;
typedef vector <ll> vi;
#define out(x) return cout<<x,0;
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define coutif(a,b,c) cout<<(a?b:c)

int main()
{
    ll n,m,i,j,k,x,y,z,ans=1,sum=0;
    string s;
    cin>>n>>m>>k;
    ll a[m];
    y=k;
    for(i=0;i<m;i++) cin>>a[i];
    x=0; j=0;
    if(m==1) out(1);
    for(i=0;i<m;i++){
      //  cout<<k<<" ";
        if(a[i]>k){
            if(x!=0) k+=x;
            else k+=y;
            if(x>0) ans++;
            x=0;
        }
        while(a[i]>k) k+=y;
        x++;
    }
    cout<<ans;
}