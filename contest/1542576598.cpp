#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#include <assert.h>
#include <sstream>
#include <bitset>
#define REP(i,n) for(ll i=0;i<(n);i++)
#define MOD 1000000007
#define int long long
#ifdef int
const long long INF = LLONG_MAX / 10;
#else
const int INF = 1010101010;
#endif
using namespace std;
typedef long long ll;
typedef vector<vector<ll>> mat;
typedef pair<int, int> P;
//typedef pair<double, double> P;

int n, k;
int bit;
map<int, int> cnt;

signed main()
{
    cin >> n >> k;
    REP(i,n) {
        int mask = 0;
        REP(j,k) {
            cin >> bit;
            if (bit == 1) {
                mask += 1 << j;
            }
        }
        cnt[mask]++;
    }

    /*
    for (auto it=cnt.begin(); it!=cnt.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
    */

    if (cnt[0] > 0) {
        cout << "YES" << endl;
        return 0;
    }

    cnt.erase(0);

    REP(i,k) {
        if (cnt[1<<i] > 0) {
            //cout << (1<<i) << endl;
            //cout << "YYYYYYYYYY" << endl;
            for (auto it=cnt.begin(); it!=cnt.end(); it++) {
                if ((~(it->first >> i) & 1)/* && it->first != 0*/) {
                    //cout << it->first << endl;
                    //cout << "AAA" << endl;
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
        if (cnt[1<<i] == 0) cnt.erase(1<<i);
    }

    for(auto it=cnt.begin(); it!=cnt.end(); it++) {
        if (__builtin_popcount(it->first) == 2) {
            //cout << "OOOOOOOOOOO" << endl;
            //cout << "it->first = " << it->first << endl;
            vector<int> idx(2);
            idx.clear();
            REP(i,k) {
                if ((it->first >> i) & 1) {
                    idx.push_back(i);
                }
            }
            cnt[it->first]--;
            for (auto it2=cnt.begin(); it2!=cnt.end(); it2++) {
                bool ok = true;
                REP(i,2) {
                    if ((it2->first >> idx[i]) & 1) {
                        ok = false;
                    }
                }
                if (ok && cnt[it2->first] > 0) {
                    cout << "YES" << endl;
                    //cout << "BBBBB" << endl;
                    return 0;
                }
            }
            cnt[it->first]++;
        }
    }

    cout << "NO" << endl;
}