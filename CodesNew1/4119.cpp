# include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,m;
ll a[200000+5],s[200000+5];

int main(){
	cin>>n>>m;
	for(int i=1,x;i<=n;i++) cin>>x,s[i]=s[i-1]+x;
	ll pre=1,prev=s[1];
	for(int i=1;i<=m;i++){
		ll x;
		cin>>x;
		if(prev+s[n]-s[pre]<=x){
			cout<<n<<endl;
			pre=1;prev=s[1];
			continue;
		}
		int l=pre-1,r=n;
		while(r-l>1){
			int md=(l+r)>>1;
			if(prev+s[md]-s[pre]>x) r=md;
			else l=md;
		}
		prev=prev+s[r]-s[pre]-x;pre=r;
		cout<<1ll*n-pre+1<<endl;
	}
	return 0;
}
