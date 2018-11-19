#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

#define REP(i,n) for(long long (i)=0;(i)<(long long)(n);(i)++)
#define RREP(i,n) for(long long (i)=(long long)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
typedef long long ll;

int main() {

    int n,k; cin >> n >> k;

    set< vector<int> > pat;
    vector< vector<int> > S;
    REP(i,n) {
        vector<int> t(k);
        REP(j,k) cin >> t[j];
        S.push_back(t);
        vector<int> idx;
        REP(j,t.size()) if(t[j] == 0) idx.push_back(j);
        REP(j,(1 << (int) idx.size())) {
            vector<int> tt = t;
            REP(l,idx.size()) if ((j >> l) & 1) {
                tt[idx[l]] = 1;
            }
            pat.insert(tt);
        }
    }

    REP(i,n) {
        vector<int> rev = S[i];
        REP(j,rev.size()) {
            if (rev[j] == 1) rev[j] = 0;
            else rev[j] = 1;
        }
        if (pat.find(rev) != pat.end()) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}