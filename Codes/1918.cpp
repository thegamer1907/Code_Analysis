#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector< ii > vii;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef	vector<pair<int,pair<int,int > > > viii;
typedef long long int lli;

#define rep(i,a,b) for(lli i=a;i<b;i++)
#define repv(i,a,b) for(lli i=b-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(a) (lli)(a.size())

#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
const int N = (int)2e5 + 10;
lli vis[N];
vvi v;
int flag=0;
int in[N],out[N];
int vis1[N];
int dfs(int t){
	//cnt++;
	//if(sz(v[t])!=2)flag=1;
	vis[t]=1;
	rep(i,0,sz(v[t])){
		if(vis[v[t][i]]==0){
			dfs(v[t][i]);
			//in[t]=max(in[t],in[v[t][i]]+1);
		}
	}
	//cnt--;
	return 0;
}
const lli mod=1000000007;
lli powmod(lli a,lli b) {lli res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int gcd(int a,int b) { return b==0 ? a : gcd (b,a%b);}
int lcm(int a,int b) { return a*(b/gcd(a,b));}
map<lli,lli> ph,ph2;
//lli dp1[5005][5005],dp2[5005][5005];
//vector<pair<lli,lli > > v4,v1,v2,v3;
//vector<lli> v1,cumu;
int main(){
	lli n,k;
	cin>>n>>k;
	lli ans=0;
	lli a[n+5];
	lli ans2=0;
	//}
	lli g=0;
	rep(i,0,n){
		cin>>a[i];
		if(a[i]==0)g++;
	//	ph[a[i]]+=1;
	}	
	if(k==1){
		vector<lli> v1;
		sort(a,a+n);
		rep(i,0,n){
			if(ph[a[i]]==0)v1.pb(a[i]);
			ph[a[i]]+=1;
		}
		//cout<<"hi"<<endl;
		rep(i,0,sz(v1)){
			//if(ph[a[i]]>2)
			ans+=(ph[v1[i]]*(ph[v1[i]]-1)*(ph[v1[i]]-2))/6;
			//ph[a[i]]+=1;
		}
		if(ans<0)ans=0;
		cout<<ans<<endl;
	}
	else{
		rep(i,0,n){
			if(a[i]/k!=0 and a[i]%k==0)
			ans2+=(ph[a[i]/k])*(ph[a[i]*(k)]);
			if(abs(a[i]*k*k)<=1000000000)
			ans2+=ph[a[i]*k*k]*(ph[a[i]*k]);
			//ph[a[i]]+=1;
			if(a[i]/(k*k)!=0 and a[i]%(k*k)==0)
			ans2+=ph2[a[i]/(k*k)];
			ph2[a[i]]+=ph[a[i]*k];
			ph[a[i]]+=1;
			//v1.pb(mp(ph[a[i]/k],ph[a[i]/(k*k)]));
	//s		cout<<ans2<<endl;
		}
	//	cout<<ph[1]<<" "<<ph[2]<<endl;
	rep(i,0,n){
		//cout<<a[i]<<" "<<ph[a[i]/k]<<" "<<a[i]/(k*k)<<endl;
			if(a[i]/k!=0 and a[i]/(k*k)!=0 and a[i]%k==0 and a[i]%(k*k)==0)
				{ans+=ph[a[i]/k]*ph[a[i]/(k*k)];}
			//ans+=(ph[a[i]*k]*ph[a[i]*k*k]);
		//	cout<<ans<<endl;
		//	ph[a[i]]+=1;
		}
	if(ans2>ans)cout<<(g*(g-1)*(g-2))/6<<endl;
	else
	cout<<ans-ans2+(g*(g-1)*(g-2))/6<<endl;
	}
	return 0;
}