//In the name of ALLAH
#include <bits/stdc++.h>
#define pb push_back
#define X first
#define Y second
using namespace std ;
typedef long long ll;
typedef pair<int,int> pii;

const ll maxn = 5e5;
const ll INF = 4e18 ;

int n, k, x, z, s, b[maxn];
vector<int> v;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> k;
	z = (1<<k) - 1;
	for(int i = 0; i < n; i++){
		v.clear(), s = 0;
		for(int j = 0; j < k; j++){
			cin >> x;
			if(x)
				s += (1<<j);
			else
				v.pb(j);
		}
		if(s == 0)
			return cout << "YES", 0;
		for(int mask = 0; mask < (1<<(v.size())); mask++){
			int t = 0;
			for(int i = 0; i < v.size(); i++)
				if(mask & (1<<i))
					t += (1<<v[i]);
			if(b[t])
				return cout << "YES", 0;
		}
		b[s]++;
	}
	if(b[0])
		return cout << "YES", 0;
	cout << "NO";
	return 0;
}
