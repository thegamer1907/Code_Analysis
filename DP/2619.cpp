// in the name of Allah

#include <bits/stdc++.h>

#define endl '\n'
#define mod 1000000007
#define sz(x) ((int) (x.size()))

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	int ans = 0;
	while(true) {
		if(min(a, b) < 1) break;
		if(a == 1 && b == 1) break;
		if(a <= b) {
			a++;
			b-=2;
		}
		else if(b < a) {
			b++;
			a-=2;
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}