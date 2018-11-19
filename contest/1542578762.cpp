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

const int MAX_K = 22, MAX_N = 1e5 + 100;

int N, K, Nr[MAX_N];
ll Dy[MAX_K][MAX_N];
int T[MAX_K][MAX_N];
int Cnt[MAX_N];

struct ST{
	int t, s, e, p, q, o;
	ST() {}
	ST(int tt, int ss, int ee, int pp, int qq, int oo) : t(tt), s(ss), e(ee), p(pp), q(qq), o(oo) {}
};
void do_dp(int t, int s, int e, int p, int q) {
	if (s > e) return;

	queue<ST> Q; Q.push(ST(t, s, e, p, q, 0));

	for(int oo=0; 1; oo++) {
		if(Q.empty()) break;
		
		ll c = 0;
		int pastP = N+2, pastM = N+1;
		while(!Q.empty()) {
			ST tt = Q.front();
			int t = tt.t, s = tt.s, e = tt.e, p = tt.p, q = tt.q, o = tt.o;
			//printf("%d %d %d %d %d %d %d\n", t, s, e, p, q, o, -1);
			if(o != oo) break;
			Q.pop();

			int m = (s+e) >> 1;

			Dy[t][m] = LINF;
			if(m <= q) {
				c = 0;
				for(int i=pastP; i<=pastM; i++) Cnt[Nr[i]]--;
			}else if(pastM != N+1) {
				for(int i=pastP-1; i>=q; i--) {
					int nr = Nr[i];
					c += Cnt[nr];
					Cnt[nr]++;
				}
				for(int k=pastM; k>m; k--) {
					int nr = Nr[k];
					c -= Cnt[nr]-1;
					Cnt[nr]--;
				}
				int nr = Nr[q];
				c -= Cnt[nr]-1;
				Cnt[nr]--;
			}
			for(int k=min(q, m); k>=p; k--){
				int nr = Nr[k];
				c += Cnt[nr];
				Cnt[nr]++;
				ll v = Dy[t-1][k-1] + c;
				if (Dy[t][m] > v) Dy[t][m] = v, T[t][m] = k;
			}
//			for(int k=m; k>=p; k--) Cnt[Nr[k]]--;

			if(m+1 <= e) Q.push(ST(t, m+1, e, T[t][m], q, o+1));
			if(s <= m-1) Q.push(ST(t, s, m-1, p, T[t][m], o+1));
			
			pastP = p; pastM = m;
		}
		for(int i=pastP; i<=pastM; i++) Cnt[Nr[i]]--;
	}
}



int main() {
	cin >> N >> K;
	for(int i=1; i<=N; i++) scanf("%d", &Nr[i]);
	for(int i=1; i<=N; i++) Dy[0][i] = LINF;
	for(int k=1; k<=K; k++) {
		do_dp(k, k, N, k, N);
		//for(int i=k; i<=N; i++) printf("%d %d : %lld\n", k, i, Dy[k][i]);
	}
	printf("%lld\n", Dy[K][N]);
	return 0;
}
