/*input
3
4 1 2
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
	cin>>n;
	vi v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];
	ll l = 0, r = n - 1, maxx = 0, ls = 0, rs = 0;
	while(l<=r) {
		if(ls >= rs) {
			rs += v[r];
			r--;
		}
		else {
			ls += v[l];
			l++;
		}
		if(ls == rs) {
			maxx = max(ls, maxx);
		}
	}
	cout<<maxx<<endl;
	return 0;
}