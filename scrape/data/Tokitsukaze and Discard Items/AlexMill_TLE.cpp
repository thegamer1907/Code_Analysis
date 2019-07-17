#include<bits/stdc++.h>
#define pb push_back
#define fr first
#define sc second
#define all(x) x.begin(), x.end()
#define skip continue
#define NAME "code"

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef long double ld;

void faster(){
  	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	cout.tie(NULL);
}

const int maxn = 3e5 + 1;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ld pi = acos(-1);

ll n, m, k, p[maxn], ans;

int main(){

faster();

cin >> n >> m >> k;

for(int i = 0; i < m; ++i){
	cin >> p[i];
}

int l = k, i = 0, cnt, q;
while(i < m){
	cnt = 0;
 	q = p[i] / k * k + (l % k);
 	if(q < p[i]) q += k;
 	l = q;
	while(i < m && p[i] <= l){
		i++;
		cnt++;
	}
	ans++;
	l += cnt;
}

cout << ans;

return 0;
}