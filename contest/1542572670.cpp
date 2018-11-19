#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<string>
#include<functional>            
#include<fstream>
#include<ctime>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> point;
typedef pair<int, int> pii;
const ll inf = 9.2e18;
const int maxn = 300007;
const int INF = 2.1e9;
const int MOD = 1e9 + 7;
const double dif = 1e-7;
const double PI = acos(-1.0);

int n, m, k;

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	double h, m, s;
	int t1, t2;
	while (cin >> h >> m >> s >> t1 >> t2){
		double ss = s / 5;
		double mm = m / 5 + s / 300;
		double hh = h + m / 60 + s / 3600;
		if (hh > 12) hh -= 12;

		int flag = 0;
		t1 %= 12; t2 %= 12;

		//cout << ss << ' ' << mm << ' ' << hh << ": " << t1 << ' ' << t2 << endl;

		int now = t1;
		while (1){
			int t = (now + 1) % 12;
			if ((now <= ss && t >= ss) || (now == 11 && ss >= 11)) break;
			if ((now <= mm && t >= mm) || (now == 11 && mm >= 11)) break;
			if ((now <= hh && t >= hh) || (now == 11 && hh >= 11)) break;
			//cout << now << " - " << t << endl;
			if (t == t2){
				flag = 1;
				break;
			}
			now = t;
		}

		now = t1;
		while (1){
			int t = (now - 1 + 12) % 12;
			if ((now >= ss && t <= ss) || (now == 0 && ss >= 11)) break;
			if ((now >= mm && t <= mm) || (now == 0 && mm >= 11)) break;
			if ((now >= hh && t <= hh) || (now == 0 && hh >= 11)) break;
			//cout << now << " - " << t << endl;
			if (t == t2){
				flag = 1;
				break;
			}
			now = t;
		}

		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}