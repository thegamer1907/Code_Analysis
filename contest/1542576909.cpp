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

const int MAXS = 205;
const int LEN = 17;
const int MAX_MASKS = (1<<(LEN+1))+5;

int N, M;
char inpS[105][105];

bool masks[MAXS][MAX_MASKS];
int len[MAXS];
int pref[MAXS];
int suf[MAXS];

int maskstart[LEN+5];

int ans[MAXS];

int maskid(int l, int mask) {
    return maskstart[l] + mask;
}
void setmask (int s, int l, int mask) {
    masks[s][maskid(l, mask)] = true;
}

bool getmask(int s, int l, int mask) {
    return masks[s][maskid(l, mask)];
}

int getsuf(int id, int l) {
    int mask = suf[id];
    return mask & ((1<<l)-1);
}

int getpref(int id, int l) {
    int mask = pref[id];
    int preflen = min(LEN, len[id]);
    return mask >> (preflen-l);
}

int merge(int suf, int pref, int l1, int l2) {
    return (suf << l2) | pref;
}

void precomp() {
    int cS = 0;
    FO (i,0,LEN+2) {
        maskstart[i] = cS;
        cS += 1<<i;
    }
}

int main() {
    precomp();
    
    scanf ("%d", &N);
    FO (i,0,N) {
        scanf (" %s", inpS[i]);
        len[i] = strlen(inpS[i]);
        FO (j,0,len[i]) inpS[i][j] -= '0';
    }
    // setup initial masks:
    FO (s,0,N) {
        FO (i,0,len[s]) {
            int cM = 0;
            FO (j,0,LEN) {
                if (i-j < 0) break;
                cM += (1<<j) * inpS[s][i-j];
                setmask(s, j+1, cM);
            }
        }
    }
    // set up prefixes and suffixes:
    FO (s,0,N) {
        int cM = 0;
        int plc = 0;
        for (int i = len[s]-1; i >= 0; i--, plc++) {
            if (plc+1 > LEN) break;
            cM += (1<<plc) * inpS[s][i];
        }
        suf[s] = cM;
    }
    FO (s,0,N) {
        int cM = 0;
        int plc = 0;
        for (int i = min(len[s], LEN)-1; i >= 0; i--, plc++) {
            cM += (1<<plc) * inpS[s][i];
        }
        pref[s] = cM;
    }
    // do merges:
    scanf ("%d", &M);
    FO (i,0,M) {
        int a, b;
        scanf ("%d %d", &a, &b);
        a--; b--;

        int myId = N+i;
        // get obvious masks
        FO (i,0,MAX_MASKS) {
            masks[myId][i] = masks[a][i] | masks[b][i];
        }
        // get merged masks:
        FO (l1,1,min(LEN, len[a])+1) {
            FO (l2,1,min(LEN, len[b])+1) {
                if (l1 + l2 > LEN) continue;
                int suf = getsuf(a, l1);
                int pref = getpref(b, l2);
                int newmsk = merge(suf, pref, l1, l2);
                setmask(myId, l1+l2, newmsk);
            }
        }
        // get ans:
        for (int i = LEN; i >= 1; i--) {
            bool isAns = true;
            FO (m,0,1<<i) {
                if (!getmask(myId, i, m)) {
                    isAns = false;
                    break;
                }
            }
            if (isAns) {
                ans[myId] = i;
                break;
            }
        }
        printf ("%d\n", ans[myId]);
        // update len/pref/suf
        len[myId] = len[a]+len[b];

        if (len[myId] > LEN) len[myId] = LEN;
        int cPref = pref[a];
        if (len[a] < LEN) {
            int len2 = min(len[b], LEN-len[a]);
            cPref = merge(cPref, getpref(b, len2), len[a], len2);
        }
        pref[myId] = cPref;

        int cSuf = suf[b];
        if (len[b] < LEN) {
            int len1 = min(len[a], LEN-len[b]);
            cSuf = merge(getsuf(a, len1), cSuf, len1, len[b]);
        }
        suf[myId] = cSuf;
    }
    /*
    FO (i,0,N+M) {
        printf ("string i: %d\n", i);
        printf ("len: %d pref: %d suf: %d\n", len[i], pref[i], suf[i]);
        printf ("masks:\n");
        FO (l,0,4) {
            FO (m,0,1<<l) {
                printf ("%d ", getmask(i, l, m));
            }
            printf ("\n");
        }
    }
    */
    return 0;
}
