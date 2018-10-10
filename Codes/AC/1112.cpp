#define _CRT_SECURE_NO_WARNINGS
#include<bits\stdc++.h>
using namespace std;
typedef long long ll;

pair<ll, ll> a[100100];

int main(){
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; ll d; cin >> n >> d;
	for (int i = 0; i < n; i++){
		ll money, friendship; cin >> money >> friendship;
		a[i] = make_pair(money, friendship);
	}
	sort(a, a + n);
	int s = 0;
	ll currentFriendship = 0, ans = -1;
	for (int e = 0; e < n; e++){
		currentFriendship += a[e].second;
		while (s <= e && a[e].first - a[s].first >= d) currentFriendship -= a[s++].second;
		ans = max(ans, currentFriendship);
	}
	cout << ans << endl;

	return 0;
}