#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
typedef long long ll;
const ll INF=1e9+10,M=1e6+100,MOD=1e9+7,ML=25;
typedef pair<ll,ll> pii;
typedef pair<pii,ll> piii;
ll a[M],h[M],p[M],b=727;
ll g(int l,int r){
	return (h[r]-(h[l]*p[r-l])%MOD+MOD)%MOD;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int l1=0,l2=0,n=s.size();
	for(int i=1;i<=n;i++)
		h[i]=((h[i-1]*b)+(s[i-1]-'a'+1))%MOD;
	p[0]=1;
	for(int i=1;i<=1e6;i++)
		p[i]=(p[i-1]*b)%MOD;
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
