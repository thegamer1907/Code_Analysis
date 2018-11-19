#include <bits/stdc++.h>

#define FOR(i, n) for(lli i = 0; i < (lli)(n); ++i)
#define ALL(x) (x).begin(), (x).end()

#define X(A) get<0>(A)
#define Y(A) get<1>(A)
#define Z(A) get<2>(A)
#define W(A) get<3>(A)

#define mt make_tuple

using namespace std;
using lli = long long int;

const lli INFTY = 1000*1000*1000;

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

struct ClockPos {
    int h, m, s;
    bool realClock;
    ClockPos(int h, int m, int s): h(h), m(m), s(s), realClock(true) {}
    ClockPos(int h): h(h), m(0), s(0), realClock(false) {}

    bool operator<(const ClockPos& p) {
        if(h < p.h)
            return true;
        else if(h == p.h) {
            if(m < p.m)
                return true;
            else if(m == p.m)
                return s < p.s;
        }
        return false;
    }
};

struct CP {
    int pos;
    bool place;
    bool operator<(const CP& c) {
        return pos < c.pos;
    }
};

bool correct(const vector<CP>& c) {
    for(size_t pos=0; pos < c.size() - 1; pos++) {
        if(c[pos].place && c[pos+1].place)
            return true;
    }
    if(c[0].place && c[c.size()-1].place)
        return true;
    return false;
}

int main() {
    vector<CP> cp;
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    cp.push_back(CP({(3*h*60*60 + ((m > 0 || s > 0)?1:0)), false}));
    cp.push_back(CP({(3*m*12*60 + ((s>0)?1:0)), false}));
    cp.push_back(CP({(3*s*12*60), false}));
    cp.push_back(CP({t1 * 60 * 60 * 3, true}));
    cp.push_back(CP({t2 * 60 * 60 * 3, true}));
    sort(cp.begin(), cp.end());

    puts(correct(cp)?"YES":"NO");
    return 0;
}
