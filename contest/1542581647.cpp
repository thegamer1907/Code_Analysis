#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;

typedef vector<bool> vb;
typedef vector<vb> vvb;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

// ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll 

int main(){
	std::ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
		
	set<vi> x;
	for(int i=0;i<n;i++){
		vi a(k);
		for(int j=0;j<k;j++) cin>>a[j];
		x.insert(a);
	}

	vvi a;

	for(set<vi>::iterator it = x.begin(); it!=x.end(); it++){
		a.pb((*it));
	}

	n = a.size();

	for(int mask = 1; mask < (1<<n); mask++){
		int val=0;
		vi cnt(k,0);
		for(int i=0;i<n;i++){
			if(mask & (1<<i)){
				val++;
				for(int j=0;j<k;j++) cnt[j] += a[i][j];
			}
		}
		bool poss = true;
		for(int j=0;j<k;j++) if(cnt[j] > val/2) poss = false;
		
		if(poss) {cout<<"YES"<<endl;return 0;}
		// cout<<val<<"   ";
		// for(int j=0;j<k;j++) cout<<cnt[j]<<" ";cout<<endl;

	}
	cout<<"NO"<<endl;

	// cout<<endl;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<k;j++) cout<<a[i][j]<<" ";cout<<endl;
	// }

}