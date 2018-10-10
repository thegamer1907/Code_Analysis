/*input
BBC
1 10 1
1 10 1
21
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
typedef vector<pii> vpii;


#define N 200005
#define mod 1000000007

ll nb,nc,ns;
ll pb, ps, pc;
ll rubles;
string s;
vi req(3,0);
bool check(ll ham) {
	ll reqR = 0ll;
	reqR += max(0ll, pb*(req[0]*ham - nb));
	reqR += max(0ll, ps*(req[1]*ham - ns));
	reqR += max(0ll, pc*(req[2]*ham - nc));
	return reqR <= rubles;
}
int main()
{
	ios::sync_with_stdio(false);
	cin>>s;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>rubles;
	ll l = 0, r = 1e14;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'B')
			req[0]++;
		else
		if(s[i] == 'S')
			req[1]++;
		else
			req[2]++;
	}
	ll ans = 0;
	while(l<r) 
	{
		ll mid = (l+r)>>1;
		if(check(mid))
			ans = mid, l = mid + 1;
		else
			r = mid;
	}
	cout<<ans<<endl;
	return 0;
}