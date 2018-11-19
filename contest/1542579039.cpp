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

int nbTiles, nbTeams;
int tilesOf[2][2][2][2];

const int PREM_WIN = 1, PREM_LOSE = 2, PREM_NOTHING = 0;

const int NB_PERMS = 6;
const int PERMS[6][4] = {
    {0, 1, 2, 3},
    {0, 1, 3, 2},
    {0, 2, 1, 3},
    {0, 2, 3, 1},
    {0, 3, 1, 2},
    {0, 3, 2, 1}
};

int& tileWith(vector<bool> acc) {
    assert(acc.size() >= 4);
    return tilesOf[acc[0]][acc[1]][acc[2]][acc[3]];
}

int inp() {
    vector<bool> winIf(nbTeams, false);
    vector<bool> has(nbTeams, false);
    FOR(_, nbTiles) {
        vector<bool> line(4, false);
        int nbMissing = nbTeams;
        FOR(i, nbTeams) {
            int v;
            scanf("%d", &v);
            line[i] = v == 0;
            if(line[i]) {
                nbMissing--;
                has[i] = true;
            }
        }

        if(nbMissing == 0)
            return PREM_WIN;

        if(nbMissing == 1) {
            FOR(i, nbTeams) {
                if(!line[i]) {
                    winIf[i] = true;
                    break;
                }
            }
        }
        tileWith(line)++;
    }
    FOR(team, nbTeams) {
        if(winIf[team] && has[team])
            return PREM_WIN;
        else if(!has[team])
            return PREM_LOSE;
    }

    if(nbTeams < 4)
        return PREM_LOSE;
    return PREM_NOTHING;
}

bool has(int id, const int* perm) {
    vector<bool> acc(4, false);
    acc[perm[id]] = true;
    acc[perm[(id+1)%4]] = true;
    return tileWith(acc) > 0;
}

bool cycleWith(const int* perm) {
    return has(0, perm) && has(1, perm) && has(2, perm) && has(4, perm);
}

bool check4() {
    FOR(permId, NB_PERMS) {
        const int* perm = PERMS[permId];
        if(cycleWith(perm) || (has(0, perm) && has(2, perm))) {
            return true;
        }
    }
    return false;
}

int main() {
    scanf("%d%d", &nbTiles, &nbTeams);
    int premVal = inp();
    switch(premVal) {
        case PREM_WIN:
            puts("YES");
            return 0;
        case PREM_LOSE:
            puts("NO");
            return 0;
        default:
            break;
    }

    assert(nbTeams == 4);

    puts(check4() ? "YES" : "NO");
    return 0;
}
