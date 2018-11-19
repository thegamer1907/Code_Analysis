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

const int MAXN = 110;
int n, m;
char s1[3];
char c[110][3];

int main(int argc, const char * argv[]) {
    cin >> s1;
    cin >> n;
    REP(i, 1, n) {
        cin >> c[i];
    }
    REP(i, 1, n) {
        if (c[i][0] == s1[0] && c[i][1] == s1[1]) {
            cout << "YES" << endl;
            return 0;
        } else if (c[i][0] == s1[1] && c[i][1] == s1[0]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    int t = 0;
    REP(i, 1, n) {
        if (c[i][0] == s1[1]) {
            t++;
            break;
        }
    }
    
    REP(i, 1, n) {
        if (c[i][1] == s1[0]) {
            t++;
            break;
        }
    }
    if (t == 2) {
        cout << "YES" << endl;
        return 0;
    }
    
    cout << "NO" << endl;
    
    
    return 0;
}










