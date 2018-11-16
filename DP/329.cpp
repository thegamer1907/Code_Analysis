#include<bits/stdc++.h>
using namespace std;
#define M 998244353
#define F first
#define S second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
#define M6 2000009
#define M5 300009
#define pi 3.14159265
ll power(ll x,ll n){
    ll ret=1;
    x%=M;
    while(n>0){
        if(n&1) ret=(ret*x)%M;
        x=(x*x)%M;
        n/=2;
    }
    return ret;
}
struct my_data{
    int x,y,z;
};
/*ll prime[M6],sp[M6];
void sieve(){
    for(int i=1;i<M6;i++) prime[i]=1;
    for(ll i=2;i*i<M6;i++){
        if(!prime[i]) continue;
        for(ll j=i*2;j<M6;j+=i) {
            prime[j]=0;
            if(sp[j]==0) sp[j]=i;
        }
    }
    for(int i=1;i<M6;i++) if(!sp[i]) sp[i]=i;
}*/
ll n,m,ar[M5],br[M5];
int  main()
{   //ios_base::sync_with_stdio (0), cin.tie (0);
    //sieve();
    //init();
    ll tc=1,t=1,flag,i,j,k,l,r,p,q,a,b,c,d,ans,x;
    //cin>>tc;
    while(t<=tc){
    	cin>>n;
    	for(i=1;i<=n;i++) cin>>ar[i];
    	cin>>m;
    	for(i=1;i<=m;i++) cin>>br[i];
    		sort(ar+1,ar+n+1);
    	sort(br+1,br+m+1);
    	ans=0;
    	for(i=1;i<=n;i++){
    		for(j=1;j<=m;j++){
    			if(abs(ar[i]-br[j])<2){
    				br[j]=10000;
    				ans++;
    				break;
    			}
    		}
    	}
    	cout<<ans;
    	t++;
    }
    return 0;
} 