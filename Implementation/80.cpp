#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;

const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int INF = INT_MAX;
const long long INFLL = (long long)1e18;
const double PI = acos(-1.0);

template<class T> T gcd(T a, T b){
    return b ? gcd(b, a % b) : a;
}
template<class T> T lcm(T a, T b){
    return a / gcd(a, b) * b;
}

const int N = (int)1e5 + 5;
const int P = 1 << 18;

int n, a, b;
          
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	ios::sync_with_stdio(false);
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(8);
	
	cin >> n >> a >> b;
	int fin = log2(n);
	int cur = 1;
	int r = 2;
	if(a > b) swap(a, b);
	while(true){
		bool flag = false;
		for(int i = 1; i <= n; i += r){
			int rig = i + r - 1;
			if(b <= rig && b >= i && a >= i && a <= rig){
				flag = true;
				break;
			}
		}
		if(flag){
			break;
		}
		cur++;
		r *= 2;
	}
	if(cur == fin) cout << "Final!\n";
	else cout << cur << endl;
	
	
#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}