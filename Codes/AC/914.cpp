#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) (int)x.size()
#define free linhdeptrai
#define fill(x, val) memset(x, val, sizeof(x))                
#define pb push_back
#define pf push_front
#define y1 mdsopfsodfjsiod
#define mp make_pair
const ll MOD = (ll)(1e9 + 7);
ll modular(ll x){x %= MOD; if(x < 0) x += MOD; return x;}
const int MAXN = (int)(1e6 + 7);

int n, k;
int fL[MAXN], fR[MAXN];
string s;

int getRes(string s){
	s = "b" + s;
	s = s + "b";
	int res = 1;
	fL[0] = 0;
	for(int i = 1; i <= n; i++){
		if(s[i] == 'a'){
			if(s[i - 1] == 'a') fL[i] = fL[i - 1] + 1;
			else fL[i] = 1;
		}else{
			if(s[i - 1] == 'a') fL[i] = fL[i - 1];
			else fL[i] = 0;
		}
		res = max(res, fL[i]);
	}
	fR[n + 1] = 0;
	for(int i = n; i >= 1; i--){
		if(s[i] == 'a'){
			if(s[i + 1] == 'a') fR[i] = fR[i + 1] + 1;
			else fR[i] = 1;
		}else{
			if(s[i + 1] == 'a') fR[i] = fR[i + 1];
			else fR[i] = 0;
		}
		res = max(res, fR[i]);
	}
	if(k == 0) return res;
	vector<int> v;
	for(int i = 1; i <= n; i++){
		if(s[i] == 'b') v.pb(i);
	}
	for(int i = 0; i < sz(v); i++){
		int z = i + 1;
		int u = k - 1;
		if(z <= k){
			res = max(res, v[i] + fR[v[i]]);
		}else res = max(res, (v[i] - v[i - u] + 1) + fR[v[i]] + fL[v[i - u]]);
	}
	return res;
}

int getRes2(string s){
	s = "a" + s;
	s = s + "a";
	int res = 1;
	fL[0] = 0;
	for(int i = 1; i <= n; i++){
		if(s[i] == 'b'){
			if(s[i - 1] == 'b'){
				fL[i] = fL[i - 1] + 1;
			}else{
				fL[i] = 1;
			}
		}else{
			if(s[i - 1] == 'b'){
				fL[i] = fL[i - 1];
			}else{
				fL[i] = 0;
			}
		}
		res = max(res, fL[i]);
	}
	fR[n + 1] = 0;
	for(int i = n; i >= 1; i--){
		if(s[i] == 'b'){
			if(s[i + 1] == 'b') fR[i] = fR[i + 1] + 1;
			else fR[i] = 1;
		}else{
			if(s[i + 1] == 'b') fR[i] = fR[i + 1];
			else fR[i] = 0;
		}
		res = max(res, fR[i]);
	}
	if(k == 0) return res;
	vector<int> v;
	for(int i = 1; i <= n; i++){
		if(s[i] == 'a') v.pb(i);
	}
	for(int i = 0; i < sz(v); i++){
		int z = i + 1;
		int u = k - 1;
		if(z <= k){
			res = max(res, v[i] + fR[v[i]]);
		}else{
			res = max(res, (v[i] - v[i - u] + 1) + fR[v[i]] + fL[v[i - u]]);
		}
	}
	return res;
}

int main(){    
	//freopen("input.txt", "r", stdin);     
	while(cin >> n >> k){
		cin >> s;
		int res = getRes(s);
		res = max(res, getRes2(s));
		cout << res << endl;
	}
	return 0;
}