#include <bits/stdc++.h>

#define pii pair < int, int >
#define pll pair < long long, long long >
#define pdd pair < double, double >
#define pss pair < string, string >
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define f first
#define s second

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = 1e9 + 7;
const int MAXN = 1e9 + 1;
const double PI = 3.14159265359;

using namespace std;

int main() {
	ios_base::sync_with_stdio (0);
	
	int h, m, x, a, b;
	cin >> h >> m >> x >> a >> b;
	h %= 12, a %= 12, b %= 12;
	h *= 5, a *= 5, b *= 5;
	if (a < b){
		swap (a, b);
	}
	bool ok = 0, okk = 0;
	if (m > 0 || x > 0){
		if (h == a){
			ok = 1;
		}
		if (h == b){
			okk = 1;
		}
	}
	if (x > 0){
		if (m == a){
			ok = 1;
		}
		if (m == b){
			okk = 1;
		}
	}
	if ((h > a && h < b + 60) || (h + 60 > a && h < b)){
		ok = 1;
	}
	if (h < a && h > b){
		okk = 1;
	}
	if ((m > a && m < b + 60) || (m + 60 > a && m < b)){
		ok = 1;
	}
	if (m < a && m > b){
		okk = 1;
	}
	if ((x > a && x < b + 60) || (x + 60 > a && x < b)){
		ok = 1;
	}
	if (x < a && x > b){
		okk = 1;
	}
	if (ok && okk){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	
    return 0;
}
