#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>


using namespace std;

typedef complex<double> Point;


const long long OO = 1e9;
const long long mod = 1e9 + 7;
const long double EPS = (1e-18);
int dcmp(long double x, long double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }

int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };


void fast(){
#ifndef ONLINE_JUDGE
	freopen("F:\\solving\\input.txt", "r", stdin);
	freopen("F:\\solving\\output.txt", "w", stdout);

#endif
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

}
const long double PI = 3.1415926535897932384626433832795028841971693993751;
const long long MAX =  3 * 100 * 1000 + 5;

int n, k;
int a[MAX];
long long on[MAX], off[MAX], oo[MAX];
int main() {
	fast();
	cin >> n >> k;

	for (int i = 1; i <= n; i++){
		cin >> a[i];
		oo[i] += (a[i]);
		off[i] += !(a[i]);
	}
	int mx = 0;
	pair<int, int> idx = { -1, -1 };
	for (int i = 1; i <= n; i++){
		if (a[i] == 1){
			int j = i, cnt = 0;
			while (j <= n && a[j] == 1){
				cnt++;
				j++;
			}
			on[i] += cnt;
			on[j] -= cnt;
			mx = max(mx, cnt);
			i = j;
		}
	}
	for (int i = 1; i < MAX; i++){
		off[i] += off[i - 1];
		on[i] += on[i - 1];
		oo[i] += oo[i - 1];
	}
	
	for (int i = 1; i <= n; i++){
		if (off[i] - off[i - 1]> k || off[i] - off[i - 1]<=0)
			continue;
		int lo = i, hi = n ,ans = -1;
		while (lo <= hi){
			int md = lo + hi >> 1;
			if (off[md] - off[i - 1] <= k){
				lo = md + 1;
				ans = md;
			}else hi = md - 1;
		}

		if (mx < on[ans + 1] + on[i - 1] + (off[ans] - off[i - 1]) + oo[ans] - oo[i - 1]){
			mx = on[ans + 1] + on[i - 1] + (off[ans] - off[i - 1]) + oo[ans] - oo[i - 1];
			idx = { i, ans };
		}
	}
	cout << mx << "\n";
	for (int i = 1; i <= n; i++){
		if (i >= idx.first && i <= idx.second)
			cout << 1 << " ";
		else cout << a[i] << " ";
	}
	return 0;
}