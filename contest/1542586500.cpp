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

bool crossForward(double x, double t1, double t2) {
    if(t1 < t2) {
        return x < t1 || x > t2;
    } else {
        return x < t1 && x > t2;
    }
}

bool crossBackward(double x, double t1, double t2) {
    if(t1 < t2) {
        return x > t1 && x < t2;
    } else {
        return x > t1 || x < t2;
    }
}

double norm(double x) {
    if(x >= 12.0) {
        return x-12.0;
    } else {
        return x;
    }
}

int main() {
    lli ih, im, is, it1, it2;
    scanf("%lld%lld%lld%lld%lld\n", &ih, &im, &is, &it1, &it2);
    double h = norm(1.0*ih + im/60.0 + is/60.0/60.0);
    double m = norm((1.0*im + is/60.0)/5.0);
    double s = norm(is/5.0);
    double t1 = norm(1.0*it1);
    double t2 = norm(1.0*it2);
    //printf("%lf %lf %lf %lf %lf\n", h, m, s, t1, t2);

    if((crossForward(h, t1, t2) && crossForward(m, t1, t2) && crossForward(s, t1, t2))
    || (crossBackward(h, t1, t2) && crossBackward(m, t1, t2) && crossBackward(s, t1, t2))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
