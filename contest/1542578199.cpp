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

struct Word {
    char a, b;
};

Word rdword() {
    Word w;
    scanf(" %c%c", &w.a, &w.b);
    return w;
}

int main() {
    Word goal = rdword();
    lli n;
    scanf("%lld", &n);
    vector<Word> w(n);
    FOR(i, n) w[i] = rdword();
    bool isLast = false;
    bool isBeg = false;
    bool isTotal = false;
    FOR(i, n) {
        if(w[i].b == goal.a) isBeg = true;
        if(w[i].a == goal.b) isLast = true;
        if(w[i].a == goal.a && w[i].b == goal.b) isTotal = true;
    }
    if(isTotal || (isBeg && isLast)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
