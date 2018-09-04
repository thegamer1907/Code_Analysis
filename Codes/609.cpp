#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <ctime>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <bitset>
#include <cmath>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

#define mp make_pair
#define mt make_tuple
#define fr first
#define sc second
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define get0 get<0>
#define get1 get<1>
#define get2 get<2>

typedef long long ll;
typedef long double ld;
typedef tuple<long long, long long, long long> tlll;
typedef tuple<int, int, int> tiii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int INF = 1e9 + 7;
const int SZ = 2e3 + 1;

int32_t main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, c = 0, cr = 0;
    cin >> k;
    while (c < k)
    {
        cr++;
        int sm = 0, cp = cr;
        while (cp)
        {
            sm += cp % 10;
            cp /= 10;
        }
        if (sm == 10) c++;
    }
    cout << cr;
    return 0;
}
