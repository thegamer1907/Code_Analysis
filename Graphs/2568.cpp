#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vi p(n+1);
	for(int i=2;i<=n;i++){
		cin>>p[i];
	}
	vi c(n+1);
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	int ans=1;
	for(int i=2;i<=n;i++){
		if(c[p[i]]!=c[i])ans++;
	}
	cout<<ans<<endl;
	return 0;
}