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

vector<string> dict;

int main() {
    char a,b;
    int nbWords;
    scanf("%c%c%d", &a, &b, &nbWords);
    FOR(_, nbWords) {
        char c,d;
        scanf("\n%c%c", &c, &d);
        if(c == a && d == b) {
            puts("YES");
            return 0;
        }
        string s;
        s += c;
        s += d;
        dict.push_back(s);
    }

    for(const string& w1: dict) {
        for(const string& w2: dict) {
            if(w1[1] == a && w2[0] == b) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}
