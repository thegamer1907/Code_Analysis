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

ll m = 1000000033;
vector<ll>p(N);

ll pw(ll b, ll p, ll m){
	if(p==0)return 1;
	ll ret = pw(b, p / 2, m);
	ret *= ret;
	ret %= m;
	if(p % 2)ret *= b;
	return ret % m;
}
ll modinv;

inline bool look(string &s,int sz,ll val){
	ll hash=0;
	for(int i=0;i<sz;i++)
		hash = (hash + ((s[i] - 'a' + 1) * p[i]) % m ) % m;
	if(hash == val)return true;
	for(int i=sz;i<s.length();i++){
		hash = (hash + m - (s[i-sz] - 'a' + 1)) % m;
		hash = (hash * modinv) % m;
		hash = (hash + ((s[i] - 'a' + 1) * p[sz-1]) % m) % m;
		if(hash == val)return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);

	p[0] = 1;
	p[1] = 31;
	modinv = pw(p[1], m - 2, m);
	for(int i = 2; i < N; i++)
		p[i] = (p[i - 1] * p[1]) % m;

	string s; cin>>s;
	if(s.length()<3){
		cout<<"Just a legend"<<endl;
		return 0;
	}
	string tmp=s;
	tmp.pop_back();
	tmp.erase(tmp.begin());
	int i1 = 0,i2=s.length() - 1;
	ll hash1 = 0, hash2 = 0;
	vector<pair<ll,int>>pre(s.length() - 1);
	vector<ll>suf(s.length() - 1);
	vector<pair<ll,int>>v;

	while(i1 < s.length() - 1 || i2 > 0){
		if(i1 < s.length() - 1)
			hash1 = (hash1 + ((s[i1] - 'a' + 1) * p[i1]) % m ) % m;
		if(i2 > 0)
			hash2 = ((s[i2] - 'a' + 1) + (hash2 * p[1]) % m) % m;
		if(hash1==hash2)
			v.push_back({hash1,i1});
		i1++,i2--;
	}// n

	int res = -1;
	int lw = 0, hi = v.size()-1;
	while(lw <= hi){
		int mid = (lw + hi) / 2;
		if(look(tmp,v[mid].second+1, v[mid].first)){ //n
			res = mid;
			lw = mid + 1;
		}
		else
			hi = mid - 1;
	}// nlog n
	if(res != -1)
		cout<<s.substr(0, v[res].second + 1)<<endl;
	else
		cout<<"Just a legend"<<endl;


	return 0;
}
