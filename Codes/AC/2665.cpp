#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int A = 1009;
const int N = 1000005;
const ll mod = 1000000000000000009;

ll h[N], p[N];

ll mult(ll a, ll b)
{
	ll q = (long double)a*b/mod;
	ll r = a*b - q*mod;
	while (r > mod) r -= mod;
	while (r < 0) r += mod;
	return r;
}

ll get(int l, int r)
{
	if(l == 0) return h[r];
	return (h[r] - mult(h[l-1], p[r-l+1]) + mod)%mod;
}

int main()
{
	string str;
	cin >> str;
	h[0] = str[0], p[0] = 1LL;
	for (int i=1; i<str.size(); i++){
		h[i] = (str[i] + mult(h[i-1], A))%mod;
		p[i] = mult(p[i-1], A);
	}
	vector < int > v;
	for (int i=0; i<str.size(); i++){
		if(h[i] == get(str.size()-i-1, str.size()-1)) v.push_back(i+1);
	}
	int lo = 0, hi = v.size()-1, ans = 0;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		bool flag = false;
		{
			for(int i=1; i+v[mid]-1 < str.size()-1; i++){
				if(h[v[mid]-1] == get(i, i+v[mid]-1)) flag = true;
			}
		}
		if(flag) ans = v[mid], lo = mid+1;
		else hi = mid-1;
	}
	if(ans == 0) puts("Just a legend");
	else cout << str.substr(0, ans) << endl;
}
