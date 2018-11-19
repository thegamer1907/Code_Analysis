// LNU_Algotesters

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
#include <fstream>
#include <complex>

using namespace std;
#define FOR(i,a,b) for(int i = (a); i <(b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it,a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a,value, sizeof(a))

#define ALL(a) a.begin(),a.end()
#define SZ(a) (int)a.size()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<LL> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 2222;

string s[MAX];

int main()
{
    //freopen("input.txt", "r", stdin);
    //ios::sync_with_stdio(false); cin.tie(0);
    int n, k;
    scanf("%d%d", &n, &k);
    set<int> S;
    FOR(i, 0, n)
    {
        int r = 0;
        FOR(j, 0, k)
        {
            int x;
            scanf("%d", &x);
            r = 2 * r + x;
        }
        S.insert(r);
    }
    
    if (S.count(0))
    {
        cout << "YES" << endl;
        return 0;
    }
    FOR(i, 0, k)
    {
        int m = 1 << i;
        if (!S.count(m))continue;
        FOR(msk, 0, 1 << k)
        {
            if ((msk & m) != 0)continue;
            if (S.count(msk))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    FOR(i, 0, k)
        FOR(j, 0, k)
        {
            int m = (1 << i) | (1 << j);
            if (!S.count(m))continue;
            FOR(msk, 0, 1 << k)
            {
                if ((msk & m) != 0)continue;
                if (S.count(msk))
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    
    cout << "NO" << endl;

    return 0;
}

