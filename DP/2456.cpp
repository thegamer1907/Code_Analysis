#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1e9+7;
const int maxn=1e5+10;
const ll inf=0x3f3f3f3f;
const double eps=1e-14;
const double pi=acos(-1.0);
#define mem(s,v) memset(s,v,sizeof(s))
#define pdd pair<double,double>
#define pii pair<int,int>

ll num[maxn];
ll sum[maxn];

int main(){
	ll t,k;
	cin>>t>>k;
	sum[0]=num[0]=0;
	sum[1]=num[1]=1;
	for(ll i=2;i<=maxn;++i){
        num[i]=(num[i-1]+num[max(0LL,i-k)])%mod;
        sum[i]=(sum[i-1]+num[i])%mod;
//        cout<<i<<" "<<num[i]<<" "<<sum[i]<<endl;
	}
	while(t--){
        ll a,b;
        cin>>a>>b;
//        cout<<sum[b]<<" "<<sum[a-1]<<endl;
        cout<<(sum[b+1]-sum[a]+mod)%mod<<endl;
        if(t) cout<<endl;
	}
	return 0;
}

/*
*/
