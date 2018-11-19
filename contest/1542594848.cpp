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

int main() {
	char Ans[33];
	scanf("%s", Ans);
	int N; scanf("%d", &N);
	bool a=false, b=false;
	for(int i=0; i<N; i++) {
		char S[33];
		scanf("%s", S);
		if(S[0] == Ans[1]) b = true;
		if(S[1] == Ans[0]) a = true;
		if(S[0] == Ans[0] && S[1] == Ans[1]) a = b = true;
	}
	if(a & b) puts("YES"); else puts("NO");
	return 0;
}
