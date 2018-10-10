#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int INF = 2000000000;
const int MAX=10000000;



int main(){
	ios_base::sync_with_stdio(0);
		cin.tie(0);

	int n;
	while(cin>>n){
		vector<int>v(n);
		int cnt=1;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v[i]=cnt;
			cnt+=x;
		}
//		for(int i=0;i<n;i++)
//			cout<<v[i]<<endl;
		int m;
		cin>>m;
		while(m--){
			int x;
			cin>>x;
			vector<int>::iterator it=upper_bound(all(v),x);
			it--;
			int ans=it-v.begin()+1;
			cout<<ans<<endl;
		}
	}

	return 0;
}
