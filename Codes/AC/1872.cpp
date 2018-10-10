#include <bits/stdc++.h>
#define fore(x,a,b) for(int x=a, qwert=b; x<qwert; x++)
#define ALL(a) (a).begin(), (a).end()
#define SZ(a) ((int)(a).size())
#define FIN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define fst first
#define snd second
using namespace std;
typedef long long ll;

ll n, m, k;

int main(){FIN;
	cin >> n >> m >> k;
	
	ll l=1, h=n*m, mid, ans=h;
	while(h>=l){
		mid=(l+h)/2;
		ll tmp=0;
		for(ll x=1; x<=n; x++)
			tmp += min(m, mid/x);
		if(tmp >= k){
			h=mid-1;
			ans=min(ans,mid);
		}else l=mid+1;
	}
	
	cout << ans << "\n";
}