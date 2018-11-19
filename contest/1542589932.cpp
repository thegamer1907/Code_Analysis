#include <bits/stdc++.h>

using namespace std;

#define SZ(v) ((int)(v).size())
#define ALL(v) (v).begin(),(v).end()
#define one first
#define two second
typedef long long ll;
typedef unsigned long long ull;
typedef pair<double, double> pd;
typedef pair<int, int> pi; typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;  typedef pair<ll, pi> plp;
typedef pair<int, pi> pip; typedef tuple<int, int, int> ti;
const int INF = 0x3f2f1f0f;
const ll LINF = 1ll * INF * INF;

int H, M, S, T1, T2;
bool isIn(int k, int a, int b) {
	return (a <= k && k <= b) || (a <= k + 12 * 60 * 60 && k + 12 * 60 * 60 <= b);
}
int main() {
	cin >> H >> M >> S >> T1 >> T2;
	H %= 12;
	T1 %= 12;
	T2 %= 12;
	int sd = S * 60 * 12;
	int md = S * 12 + M * 60 * 12;
	int hd = S * 1 + M * 60 + H * 60 * 60;
	int td1 = T1 * 60 * 60, td2 = T2 * 60 * 60;
	
	vector<int> list({sd, md, hd});
	sort(ALL(list));
	list.push_back(list[0] + 12 * 60 * 60);
	for(int i=0; i<3; i++) {
		int a = list[i], b = list[i+1];
		if(isIn(td1, a, b) && isIn(td2, a, b)) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
