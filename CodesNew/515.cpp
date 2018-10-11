#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
vector<ll>v;
bool vis[10000001];
ll arr[10000001],cnt[10000001];
int main(){
	ios::sync_with_stdio(false);
	ll i,j,k,n,a,ans=0,l,r,q;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		arr[a]++;
	}
	for(i=2;i<=10000000;i++){
		if(!vis[i]){
			ans=0;
			for(j=1;j*i<=10000000;j++){
				ans+=arr[i*j];
				vis[i*j]=1;
			}
			cnt[i]=ans;
		}
	}
	for(i=1;i<=10000000;i++)cnt[i]+=cnt[i-1];
	cin>>q;
	while(q--){
		cin>>l>>r;
		if(l>10000000){cout<<0<<"\n";continue;}
		if(r>10000000)r=10000000;
		cout<<cnt[r]-cnt[l-1]<<"\n";
	}
}

