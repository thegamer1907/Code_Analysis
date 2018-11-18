#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
#include <complex>

using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define RFOR(i,b,a) for (int i = (b)-1; i >= (a); i--)
#define ITER(it,a) for (__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a,value) memset(a, value, sizeof(a))

#define SZ(a) (int)a.size()
#define ALL(a) a.begin(), a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;
//#define double float

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL) INF;

const double EPS = 1e-6;
const int MAX = 1000 * 100 + 47;
const int MIN = 20 + 7;
const int MOD = INF;


int A[MAX];
int C[MAX];
LL DP[MIN][MAX];
int L, R;
LL S;


void upd(int idx, int v)
{
    int &c = C[A[idx]];
    S -= c * 1LL * (c-1) / 2;
    c += v;
    S += c * 1LL * (c-1) / 2;
}

void calc(int k, int l, int r, int L, int R)
{
    if (l > r)return ;
    int m = (l + r) / 2;
    
    LL ans  = LINF;
    int idx = -1;
    
    FOR(i, L, R + 1)
    {
        if (i > m)break;
        while(::L > i) upd(--::L, +1);
        while(::L < i) upd(::L++, -1);
        while(::R > m) upd(::R--, -1);
        while(::R < m) upd(++::R, +1);
        
        LL res = S + (i ? DP[k-1][i-1] : 0);
        
        if (res < ans)
        {
            ans = res;
            idx = i;
        }
    }
    
    DP[k][m] = ans;
    calc(k, l, m-1, L, idx);
    calc(k, m+1, r, idx, R);
}


int main()
{
    L = 0, R = -1;
    int n, k;
    scanf("%d%d", &n, &k);
    FOR(i, 0, n)scanf("%d", A + i);
    
    FOR(i, 0, n)DP[0][i] = LINF;
    FOR(i, 1, k + 1)calc(i, 0, n-1, 0, n-1);
    cout << DP[k][n-1] << endl;
}
