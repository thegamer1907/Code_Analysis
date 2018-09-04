#include <bits/stdc++.h>
#define endl '\n'
#define LL_MAX 0x7FFFFFFFFFFFFFFF 
#define INF (INT_MAX/2)
#define LL long long
#define PII pair<int,int>
#define all(V) (V).begin(),(V).end()
using namespace std;
const int MAXN = 100000;

LL q[MAXN+5];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	LL N, minv = INF;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> q[i];
		minv = min(minv, q[i]);
	}
	
	int cur = minv % N;
	LL pass = minv;
	while (true) {
		if (q[cur] <= pass) break;
		pass++;
		cur = (cur + 1) % N;
	}
	
	cout << cur + 1 << '\n';
	
	/**** Note MAXN ****/
}
