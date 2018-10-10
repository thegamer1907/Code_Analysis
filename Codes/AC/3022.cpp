// Implementation practice (Have seen the editorial)
#include <bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << ": " << (a) << "\n"

const int N = 1e6 + 10, M = 1e9 + 7;
int n, z1[N], z2[N], maxi, maxid = -1;
string st;
priority_queue<pair<int, int> > pq;
bool t[4 * N];

void insert(int p) {
	int at = 1, L = 0, R = n-1, mid;
	while (L != R) {
		t[at] = true;
		mid = (L+R)>>1;
		if (p <= mid) R = mid, at<<=1;
		else L = mid+1, at = at<<1|1;
	}
	t[at] = true;
}
int query(int l, int r) {
	int at = 1, L = 0, R = n-1, mid;
	while (L != R) {
		mid = (L+R)>>1;
		if (L>r || R<l) return -1;
		if (mid<r && t[at<<1|1]) L = mid+1, at = at<<1|1;
		else {
			if (t[at<<1]) R = mid, at<<=1;
			else return -1;
		}
	}
	return L;
}

void init(int wh) {
	int L = 0, R = 0;
	string s = st;
	int* z = z1;
	if (wh == 2) reverse(s.begin(), s.end()), z = z2;
	for (int i = 1; i < n; i++) {
		if (i > R) {
			L = R = i;
			while (R < n && s[R-L] == s[R]) R++;
			z[i] = R-L; R--;
		} else {
			int k = i-L;
			if (z[k] < R-i+1) z[i] = z[k];
			else {
				L = i;
				while (R < n && s[R-L] == s[R]) R++;
				z[i] = R-L; R--;
			}
		}
	}
	if (wh == 2) {
		reverse(z2, z2+n);
		z[n-1] = n;
		for (int i = 1; i < n; i++) z[i-1]-=i, pq.push({z[i-1], i-1});
	}
}

int main() {
	/*freopen("in", "r", stdin);
	freopen("out", "w", stdout);*/
	ios::sync_with_stdio(false);cin.tie(NULL);

	cin >> st; n = st.length();
	init(1);
	init(2);
	for (int i = 1; i < n-1; i++) {
		while (!pq.empty() && pq.top().first >= -i)
			insert(pq.top().second), pq.pop();
		int res = (z1[i]>0?query(i, i+z1[i]-1):-1);
		if (res != -1 && res-i+1 > maxi)
			maxi = res-i+1, maxid = i;
	}

	if (maxi == 0) cout << "Just a legend" << endl;
	else {
		for (int i = maxid; i < maxid + maxi; i++) cout << st[i];cout << endl;
	}

	return 0;
}