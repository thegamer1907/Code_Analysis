#include <bits/stdc++.h>

//#define INF 1000000010
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

const int MAXN = 100005;
const ll INF = (1ll<<55);

int N, K;
int a[MAXN];
//int lastSeenId[MAXN]
ll seenAm[MAXN];
bool isLoaded[MAXN];
ll globCost;

void resetId() {
    FO (i,0,MAXN) seenAm[i] = 0;
    FO (i,0,MAXN) isLoaded[i] = 0;
    globCost = 0;
}

// cost accounting for ind c too
ll load(int c) {
    if (isLoaded[c]) return globCost;
    int v = a[c];
    globCost += seenAm[v];
    seenAm[v]++;
    isLoaded[c] = true;
    return globCost;
}

ll unload(int c) {
    if (!isLoaded[c]) return globCost;
    int v = a[c];
    isLoaded[c] = false;
    seenAm[v]--;
    globCost -= seenAm[v];
    return globCost;
}

ll dp[22][MAXN];

int cK;

// [cS, cE), [sS, sE)
// invariant: on entry, everything in [sS,par] is loaded
// on exit, everything from [sS,par] is loaded again.
void doDp(int p, int cS, int cE, int sS, int sE) {
    int mid = (cS+cE)/2;
    //printf ("k: %d doDp: %d mid: %d [%d, %d) [%d, %d)\n", cK, p, mid, cS, cE, sS, sE);
    if (cS == cE) return;

    ll bAns = INF;
    int bPlc = sS;

    FO (i,mid+1,p+1) {
        unload(i);
    }
    FO (i,p+1,mid+1) {
        load(i);
    }
    //printf ("my cost: %lld\n", globCost);
    FO (i,sS,min(sE,mid)) {
        ll cCost = unload(i);
        ll actCost = cCost + dp[cK-1][i];
        //printf ("going to %d: cost: %lld dp: %lld\n", i, cCost, dp[cK-1][i]);
        if (actCost < bAns) {
            bAns = actCost;
            bPlc = i;
        }
    }
    dp[cK][mid] = bAns;
    // recurse into left:
    // reset so invariant is true:
    FO (i,sS,min(sE,mid)) {
        load(i);
    }
    if (cS != cE-1) {
        doDp(mid, cS, mid, sS, bPlc+1);

        // recurse into right:
        FO (i,sS,bPlc) {
            unload(i);
        }
        doDp(mid, mid+1, cE, bPlc, sE);
        FO (i,sS,bPlc) {
            load(i);
        }
    }
    // reset to return to parent:
    // at this point guaranteed [sS, mid] is loaded
    FO (i,p+1,mid+1) {
        unload(i);
    }
    FO (i,mid+1,p+1) {
        load(i);
    }
    return;
}

int main() {
    scanf ("%d %d", &N, &K);
    FO (i,0,N) {
        scanf ("%d", &a[i]);
    }
    resetId();
    FO (i,0,N) {
        dp[0][i] = load(i);
        FO (k,1,K+1) dp[k][i] = INF;
    }
    FO (k,1,K) {
        cK = k;
        resetId();
        FO (i,0,N) load(i);
        //printf ("globCost: %lld\n", globCost);
        doDp(N-1, 0, N, 0, N);
        FO (i,0,N) {
            //printf ("dp[%d][%d]: %lld\n", k, i, dp[k][i]);
        }
    }
    printf ("%lld\n", dp[K-1][N-1]);
    return 0;
}
