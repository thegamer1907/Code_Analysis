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

string a[101];

int main() {
	ios_base::sync_with_stdio (0);
	
	string q;
	int n;
	cin >> q >> n;
	bool ok = 0, okk = 0;
	for (int i = 1; i <= n; ++i){
		cin >> a[i];
		if (a[i] == q){
			cout << "YES";
			return 0;
		}
	}
	for (int i = 1; i <= n; ++i){
		if (a[i][0] == q[1]){
			ok = 1;
		}
		if (a[i][1] == q[0]){
			okk = 1;
		}
	}
	if (ok && okk){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
    return 0;
}
