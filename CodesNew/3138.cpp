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

int main() {
	fast();
	cin >> n >> k;

	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}

	int j = 1, cnt0 = 0, tot = 0;
	pair<int, int>idx = { -1, -1 };
	for (int i = 1; i <= n; ++i){

		while (j <= n&&cnt0 + !(a[j]) <= k){
			cnt0 += !(a[j]);
			j++;
		}
		if (tot < (j - i)){
			tot = (j - i);
			idx = { i, j-1 };
		}
		cnt0 -= !(a[i]);
	}
	cout << tot << endl;
	for (int i = 1; i <= n; i++){
		if (i >= idx.first && i <= idx.second)
			cout << 1 << " ";
		else cout << a[i] << " ";
	}
	return 0;
}