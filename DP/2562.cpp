#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pll pair<ll,ll>
#define ff first.first
#define fs first.second
typedef long long ll;
typedef unsigned long long ull;
//const ll mod = 1e16+371;
//const ll mod = 1e12+193;
const double PI = acos(-1);
const ll INF = 1e18;
const ll MAX=1e5+10, N=1e6+5;
//const int lim=1<<18;
const ll mod = 1e9+7;


int main(){
	ios_base::sync_with_stdio(0);
	//	cin.tie(0);
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);

	int n;
	while(cin>>n){
		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		int mx=1;
		int cnt=1;
		for(int i=1;i<n;i++){
			if(v[i]>v[i-1])cnt++,mx=max(mx,cnt);
			else cnt=1;
		}
		cout<<mx<<endl;
	}


	return 0;
}
