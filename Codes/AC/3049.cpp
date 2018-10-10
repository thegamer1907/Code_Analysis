#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, int> pli;
typedef pair <int, ll> pil;
typedef pair <ll, ll> pll;
typedef pair <int, pii> piii;
#define fr first
#define sc second
#define pb push_back
#define ppb pop_back()
#define ins insert
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())
#define mpr make_pair
vector<int> z_f (string s) {
	int n = (int) s.length();
	vector<int> z (n);
	for (int i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min (r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i,  r = i+z[i]-1;
	}
	return z;
}
string s;
int mx;
int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> s;
	vector <int> z = z_f(s);
	int n = sz(s);
	for(int i = 1;i < n; ++ i){
		if(z[i] == n - i){
			if(mx >= z[i]){
				cout << s.substr(0, z[i]);
				return 0;
			}
			mx = max(mx, z[i] - 1);
		}
		else mx = max(mx, z[i]);
	}
	cout << "Just a legend";
	return 0;
}