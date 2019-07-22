#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;
const int BIG = 1e9 + 555;
const int maxN = 100 * 1000 + 9;
#define int long long

int n, m, k;
int p[maxN];

#undef int
int main(){
#define int long long
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;
	
	for(int i = 1; i <= m; i++){
		cin >> p[i];
		p[i]--;
	}
	
	int off = 0;
	int i = 1, ans = 0;
	while(i <= m){
		int j = i;
		int curPage = (p[i] - off) / k;
		int l = curPage * k;
		int r = l + k - 1;
		
		int foo = i;
		
		//cerr << l << ' ' << r << '\n';
		for(int j = i; j <= m; j++){
			int pos = p[j] - off;
			if(l <= pos && pos <= r){
				//cerr << i << ' ' << j << '\n';
				foo = j;
			} else {
				break;
			}
		}

		int len = foo - i + 1;
		//cerr << "!!" << i << ' ' << foo << '\n';
		off += len;
		i = foo + 1;
		ans++;
	}

	cout << ans << '\n';

	return 0;
}