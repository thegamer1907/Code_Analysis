/*input
ah
1
ha

*/
#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
#define F first
#define S second
#define pb push_back
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


#define N 200005
#define mod 1000000007


int main()
{
	ios::sync_with_stdio(false);
	int n;
	string s;
	cin >> s;
	vector<bool> st(26, false);
	vector<bool> en(26, false);
	cin >> n;
	string ss;
	for(int i=0; i<n; i++) {
		cin >> ss;
		if(ss == s) {
			cout << "YES" << endl;
			return 0;
		}
		st[ss[0] - 'a'] = true;
		en[ss[1] - 'a'] = true;
	}
	if(st[s[1] - 'a'] && en[s[0] - 'a']) {
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}