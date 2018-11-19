#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <functional>
#include <map>
#include <bitset>

#define INF 0x7fffffff
#define REP(i,j,k) for(int i = j;i <= k;i++)
#define squr(x) (x) * (x)
#define lowbit(x) (x&(-x))
#define getint(x) scanf("%d", &(x))

using namespace std;

typedef long long LL;
typedef pair<int, int> pii;


int n, k;
int t[6], tt[6];
int f[2][2][2][2];

int main(int argc, const char * argv[]) {
    getint(n); getint(k);
    REP(i, 1, n) {
        REP(i, 1, k) {
            getint(t[i]);
        }
        f[t[1]][t[2]][t[3]][t[4]]++;
    }
    
    REP(i, 0, (1 << k) - 1) {
        int j = i;
        REP(m, 1, k) {
            t[m] = j % 2;
            //tt[m] = (j + 1) % 2;
            j /= 2;
        }
        
        REP(ii, 0, (1 << k) - 1) {
            j = ii;
            REP(m, 1, k) {
                tt[m] = j % 2;
                j /= 2;
            }
            bool flag = false;
            for (int jj = 1; jj <= k; jj++) {
                if (t[jj] == 1 && tt[jj] == 1) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                if (f[t[1]][t[2]][t[3]][t[4]] != 0 && f[tt[1]][tt[2]][tt[3]][tt[4]] != 0) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            
        }
        
        
    }
    
    cout << "NO" << endl;
    
    return 0;
}










