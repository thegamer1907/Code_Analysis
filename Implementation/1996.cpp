#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define sec second
#define for_(i, a, b) for(int i = int(a); i < int(b); i++)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main(){
    ios_base::sync_with_stdio(false);

	int x = 0, y = 0, z = 0;

	int n; cin >> n;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		x += a;
		y += b; 
		z += c;
	}

	if (x == 0 && y == 0 && z == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

