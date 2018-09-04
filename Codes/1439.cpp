//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")


#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define foreach(it, v) for(auto it=(v).begin(); it != (v).end(); ++it)

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define tr(...) cout<<__FUNCTION__<<' '<<__LINE__<<" = ";trace(#__VA_ARGS__, __VA_ARGS__)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

template<typename S, typename T> 
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.fi<<", "<<p.se<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
int l=v.size();for(int i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

template<typename T>
void trace(const char* name, T&& arg1){cout<<name<<" : "<<arg1<<endl;}

template<typename T, typename... Args>
void trace(const char* names, T&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma-names)<<" : "<<arg1<<" | ";trace(comma+1,args...);}

const ld PI = 3.1415926535897932384626433832795;

int n;
ll s, x, ans = 0, cost = 0, curr = 0;
vector <ll> nums,tmp;

bool ok(int k){
	curr = 0;
	tmp.clear();
	for(ll i = 1; i <= n; i++){
		tmp.pb(nums[i - 1] + (i * (ll)k));
	}
	sort(tmp.begin(),tmp.end());
	for(int i = 1; i <= k; i++)
		curr += tmp[i - 1];
	return curr <= s;
}

int main(){_
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		cin >> x;
		nums.pb(x);
	}
	int l = 1,r = n;
	while(l <= r){
		int mid = (l + r) / 2;
		if(ok(mid)){
			ans = mid;
			cost = curr;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans << ' ' << cost << '\n';
	return 0;
}
