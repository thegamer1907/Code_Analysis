#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff first.first
#define fs first.second
typedef long long ll;
typedef unsigned long long ull;
const double PI = acos(-1);
//const ll mod = 1e16+371;
//const ll mod = 1e12+193;
const ll mod = 1e9+9;
//const int mod = 1e9+7;
const int INF = 1e9;
const int MAX=1e5+10, N=1e6+10;


int main(){
	ios_base::sync_with_stdio(0);
//	cin.tie(0);

	int n;
	while(cin>>n){
		vector<ll>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(i)v[i]+=v[i-1];
		}
		if(v.back()%3){
			cout<<0<<endl;
			continue;
		}
		ll x=v.back()/3ll;
		vector<ll>y(n);
		for(int i=n-2;i>0;i--){
			y[i]+=(v[i]==x*2ll);
			y[i]+=y[i+1];
		}
		ll ans=0;
		for(int i=0;i<n-2;i++){
			if(v[i]==x)
				ans+=y[i+1];
		}
		cout<<ans<<endl;
	}

	return 0;
}
