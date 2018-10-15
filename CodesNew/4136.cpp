/***** Enigma27 *****/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pll         pair<ll int,ll int>
#define vll          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios	    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll n,i,j,k,l,r,sum=0,flag=0,t,ans=0,a[200005],b[200005],q;
int main()
{
	ios
	cin>>n>>q;
	for(int i=0;i<n;i++){
        cin>>a[i];
        if(i) a[i]+=a[i-1];
	}
	for(int i=0;i<q;i++) cin>>b[i];
	ll cur=0;
	for(int i=0;i<q;i++){
        cur+=b[i];
        if(cur>=a[n-1]){
            cur=0;
            cout<<n<<endl;
        }
        else{
            int index=lbnd(a,a+n,cur)-a;
            cout<<n-index-1+(a[index]>cur)<<endl;
        }
	}
	return 0;
}
