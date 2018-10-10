#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
typedef long long ll;
const ll INF=1e9+10,M=1e6+100,MOD=1e9+7,ML=25;
typedef pair<ll,ll> pii;
typedef pair<pii,ll> piii;
ll a[M],h[5][M],p[5][M],b=727;
ll mo[5]={1000000007,1000000009};
pii g(int l,int r){
	pii x={0,0};
	for(int i=0;i<2;i++)
		a[i]=(h[i][r]-(h[i][l]*p[i][r-l])%mo[i]+mo[i])%mo[i];
	return {a[0],a[1]};
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int l1=0,l2=0,n=s.size();
	for(int j=0;j<2;j++){
		for(int i=1;i<=n;i++)
			h[j][i]=((h[j][i-1]*b)+(s[i-1]-'a'+1))%mo[j];
	}
	p[0][0]=1;
	p[1][0]=1;
	for(int j=0;j<2;j++){
		for(int i=1;i<=1e6;i++)
			p[j][i]=(p[j][i-1]*b)%mo[j];
	}
	for(int i=1;i<n;i++){
		if(g(0,i)==g(n-i,n))
			l2=l1,l1=i;
	}
	if(l1==0) return cout<<"Just a legend",0;
	for(int i=1;i+l1<n;i++){
		if(g(0,l1)==g(i,i+l1)){
			for(int j=0;j<l1;j++)
				cout<<s[j];
			return 0;
		}
	}
	if(l2==0) return cout<<"Just a legend",0;
	for(int j=0;j<l2;j++)
		cout<<s[j];
}
