#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld%lld",&x,&y)
#define slll(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define pl(x) printf("%lld\n",x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second
#define MAX 1000000
#define mod 1000000007

ll power(ll a, ll b) {ll ret=1;while(b) {if(b&1) ret*=a;a*=a;if(ret>=mod) ret%=mod;if(a>=mod) a%=mod;b>>=1;}return ret;}

int main()
{
    ll n,m,t,i,j,c=0;
    cin>>n>>m;
    string a[n];
    string b[m];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<m;i++){
        cin>>b[i];
    }

    if(n>m){
        cout<<"YES\n";
    }
    else if(m>n){
        cout<<"NO\n";
    }
    else{
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]==b[j])
                    c++;
            }
        }
        
        if(c%2!=0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
