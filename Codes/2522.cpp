
/*\
 * ...
 * ......
 * In the name of ALLAH
 * ......
 * ...
\*/

#include <bits/stdc++.h>

using namespace std;
#define Size(x) ((int)(x).size())
#define pb push_back
#define LD_OUT setprecision(12) << fixed
typedef long long ll;
typedef long double ld;
typedef pair<int,int>pii;
const int INF = 1e9 + 10 , MV = 1e7 + 5 , MN = 1e6 + 10;

int dv[MV] , n , arr[MN];
bitset<MV>pr;
vector<int>vec;
int cnt[MV];

void prep(){
	for(int i=2;i<MV;++i){
		if(pr[i]) continue;
		for(ll j=1ll*i*i;j<MV;j+=i){
			pr[j] = true;
			if(!dv[j]) dv[j] = i;
		}
	}
}

int main()
{
	ios_base :: sync_with_stdio(false) ,cin.tie(0) , cout.tie(0);
	prep();
	cin >> n;
	for(int i=0;i<n;++i) cin >> arr[i];
	vec.pb(0);
	for(int i=0;i<n;++i){
		int x = arr[i];
		while(dv[x]){
			int y = dv[x];
			vec.pb(y);
			while(x % y == 0) x /= y;
		}	
		if(x != 1) vec.pb(x);
	}
	sort(vec.begin() , vec.end());
	vec.resize(unique(vec.begin() , vec.end()) - vec.begin());
	
	for(int i=0;i<n;++i){
		int x = arr[i];
		while(dv[x]){
			int y = dv[x];
			int ind = lower_bound(vec.begin() , vec.end() , y) - vec.begin();
			++cnt[ind];
			while(x % y == 0) x /= y;
		}
		if(x != 1) ++cnt[lower_bound(vec.begin() , vec.end() , x) - vec.begin()];
	}
	for(int i=1;i<MV;++i) cnt[i] += cnt[i-1];
	int q;cin>>q;
	while(q--){
		int l , r ;cin>>l>>r;
		r = upper_bound(vec.begin() , vec.end() , r) - vec.begin() - 1;
		l = lower_bound(vec.begin() , vec.end() , l) - vec.begin() - 1;

		cout << cnt[r] - cnt[l] << '\n';
	}
	return 0;
}

