#include <bits/stdc++.h>

#define FOR(i, n) for(lli i = 0; i < (lli)(n); ++i)

#define X(A) get<0>(A)
#define Y(A) get<1>(A)
#define Z(A) get<2>(A)
#define W(A) get<3>(A)

#define mt make_tuple
#define mp make_pair
#define pb push_back

#define fst first
#define snd second


using namespace std;
using lli = long long int;
using ll = long long int;

using pii   = tuple<lli, lli>;
using piii  = tuple<lli, lli, lli>;
using vi    = vector<lli>;
using vii   = vector<pii>;
using viii  = vector<piii>;
using vvi   = vector<vi>;
using vvii  = vector<vii>;
using vviii = vector<viii>;
using vb    = vector<bool>;
using vvb   = vector<vb>;

struct Problem {
    Problem() : a(false), b(false), c(false), d(false) {}
    Problem(lli n) : a(n%2), b((n/2)%2), c((n/4)%2), d((n/8)%2) {}
    bool a, b, c, d;
    lli toNum() {
        return a + 2*b + 4*c + 8*d;
    }
};

#if 0
lli mx(const vi& cur) {
    return max(max(max(cur[0], cur[1]), cur[2]), cur[3]);
}
#endif

lli nbList[16] = {
    0,
    1, 2, 4, 8,
    3, 5, 9, 6, 10, 12,
    7, 11, 13, 14,
    15
};

#if 0
bool canComplete(lli n, const vi& pbnb, bool first = true) {
    if(n == 0) return true;
    if(!first && pbnb[n] != 0) return true;
    lli sub = (n-1)&n;
    do {
        if(pbnb[sub] != 0 && canComplete(n^sub, pbnb, false)) {
            return true;
        }
        sub = (sub-1)&n;
    } while(sub != n);
    return false;
}

void addPb(vi& pbnb, vi& cur, lli n) {
    pbnb[n] -= 1;
    Problem pb(n);
    cur[0] += pb.a;
    cur[1] += pb.b;
    cur[2] += pb.c;
    cur[3] += pb.d;
}
#endif

int main() {
    lli n, k;
    scanf("%lld%lld", &n, &k);
    vector<Problem> pbs(n);
    FOR(i, n) {
        vi tmp(k);
        FOR(j, k) scanf("%lld", &tmp[j]);
        Problem pb;
        if(k >= 1) pb.a = tmp[0];
        if(k >= 2) pb.b = tmp[1];
        if(k >= 3) pb.c = tmp[2];
        if(k >= 4) pb.d = tmp[3];
        pbs[i] = pb;
    }

    vi pbnb(16, 0);
    FOR(i, n) {
        pbnb[pbs[i].toNum()] += 1;
    }

    if(n == 1) {
        if(pbnb[0] != 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        return 0;
    }

    if(pbnb[0] != 0) {
        printf("YES\n");
        return 0;
    }

    FOR(i, 16) {
        lli cur = nbList[i];
        if(pbnb[cur] == 0) continue;
        lli curop = (~cur)&0xF;
        lli sub = curop;
        do {
            if(pbnb[sub] != 0) {
                printf("YES\n");
                return 0;
            }
            sub = (sub-1)&curop;
        } while(sub != curop);
    }
    printf("NO\n");

    return 0;
#if 0
    vi cur(4, 0);

    FOR(i, n) {
        lli maxi = mx(cur);
        lli nmaxi = 0;
        FOR(j, 4) {
            if(cur[j] == maxi) {
                nmaxi += (1<<j);
            }
        }
        lli nnmaxi = (~nmaxi)&0xF;
        lli sub = nnmaxi;
        bool ok = false;
        do {
            if(pbnb[sub] != 0 && canComplete(sub, pbnb)) {
                addPb(pbnb, cur, sub);
                ok = true;
                break;
            }
            sub = (sub-1)&nnmaxi;
        } while(sub != nnmaxi);

        if(!ok) {
            do {
                if(pbnb[sub] != 0) {
                    addPb(pbnb, cur, sub);
                    ok = true;
                    break;
                }
                sub = (sub-1)&nnmaxi;
            } while(sub != nnmaxi);
        }

        if(!ok) {
            FOR(j, 16) {
                if(pbnb[nbList[j]] != 0) {
                    addPb(pbnb, cur, nbList[j]);
                    break;
                }
            }
        }
        maxi = mx(cur);
        if(2*maxi <= (i+1)) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
#endif
}
