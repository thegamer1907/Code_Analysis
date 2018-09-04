#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define clr(t, val) memset(t, val, sizeof(t))

#define all(v)  v.begin() , v.end()
#define SZ(v) ((int)(v).size())

typedef long long Long;
typedef vector<int> vInt;
typedef vector<vInt> vvInt;
typedef vector<string> vStr;
typedef pair<int, int> Pair;
typedef pair<Long, Long> PairLong;
typedef vector<Pair> vPair;
typedef vector<PairLong> vPairLong;

int get(vInt &acum, int lo, int hi) {
	return acum[hi + 1] - acum[lo];
}

int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) == 2) {
		vvInt values(n, vInt(m));
		REP (i, n) {
			REP (j, m) {
				scanf("%d", &values[i][j]);
			}
		}
		
		vvInt mat(n, vInt(m));
		REP (j, m){
			REP (i, n - 1) {
				if (values[i][j] <= values[i + 1][j]) {
					mat[i + 1][j] = 1;
				}
			}
		}
		
		vvInt acumMat(n + 1, vInt(m));
		REP (j , m) {
			REP (i, n) {
				acumMat[i + 1][j] = (mat[i][j] ? (acumMat[i][j] + 1) : 0);
			}
		}
		vInt rows(n + 1);
		REP (i, n + 1) {
			rows[i] = *max_element(all(acumMat[i]));
		}
		
		int queries;
		scanf("%d", &queries);
		REP (q, queries) {
			int left, right;
			scanf("%d%d", &left, &right);
			left --, right --;
			puts((rows[right + 1] >= right - left) ? "Yes" : "No");
		}
	}
}
