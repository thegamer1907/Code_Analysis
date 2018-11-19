#include <bits/stdc++.h>

#define INF 1000000010
#define INFLL ((1LL<<62)-5)
#define FO(i,a,b) for (int (i) = (a); (i) < (b); ++(i))
#define OF(i,a,b) for (int (i) = (a)-1; (i) >= (b); --(i))
#define SZ(v) int(v.size())

using namespace std;
//PAIRS:
#define mp make_pair
#define fi first
#define se second
typedef pair<int,int> pii;
typedef long long ll;

/*~~~~TEMPLATE END~~~~*/

int N, K;
int knows[100005][4];
int has[16];
int am[4];

void calc(int mask) {
    int doneProbs = 0;
    FO (i,0,4) am[i] = 0;
    FO (i,0,16) {
        if ((mask & (1<<i)) == 0) continue;
        if (!has[i]) continue;
        doneProbs++;
        // have it and want it
        FO (j,0,K) {
            if (i & (1<<j)) {
                // has seen problem:
                am[j]++;
            } else {
                am[j]--;
            }
        }
    }
    if (doneProbs == 0) return;
    FO (j,0,K) {
        if (am[j] > 0) return;
    }
    //printf ("done with mask %d\n", mask);
    printf ("YES\n");
    exit(0);
}

int main() {
    scanf ("%d %d", &N, &K);
    FO (i,0,N) {
        int cMask = 0;
        FO (j,0,K) {
            scanf ("%d", &knows[i][j]);
            cMask += knows[i][j]*(1<<j);
        }
        //printf ("cmask: %d\n", cMask);
        has[cMask] = true;
    }
    FO (i,0,1<<16) {
        calc(i);
    }
    printf ("NO\n");
    return 0;
}
