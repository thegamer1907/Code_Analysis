#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vi bad(n+1,0);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		bad[a]=1;
		bad[b]=1;
	}
	for(int i=1;i<=n;i++){
		if(!bad[i]){
			cout<<n-1<<endl;
			for(int j=1;j<=n;j++){
				if(i!=j){
					cout<<i<<' '<<j<<endl;
				}
			}
			return 0;
		}
	}
	assert(0);
}
