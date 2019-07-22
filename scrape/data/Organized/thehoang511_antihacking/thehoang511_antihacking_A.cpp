#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <utility>
#include <deque>
#include <sstream>
using namespace std;

#define namefile ""
#define inifile freopen(namefile".inp","r",stdin); freopen(namefile".out","w",stdout)
#define mp make_pair
#define pb push_back
#define fi first
#define se second

typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;
typedef pair<int,int> PII;
typedef pair<long,long> PLL;
typedef vector<int> VI;
typedef vector<long> VL;
typedef vector<string> VS;
typedef vector< VI > VVI;
typedef vector< VL > VVL;
typedef vector< PII > VPII;
typedef vector< PLL > VPLL;
typedef set<int> SETI;
typedef set<long> SETL;
typedef map<int,int> MII;
typedef map<long,long> MLL;

const long long MOD = 1e9+7;
const long long INFMAX = 1e9;
const long long INFMIN = -1e9;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};
const double epsilon = 1e-9;
const double PI = acos(-1.00);
const int MAXM = 1e5+5;

llong n,k,m;
vector <llong> special;

llong res(0);

void Input()
{
    scanf("%I64d %I64d %I64d",&n,&m,&k);
    special.resize(m+1);
    for (int i=1; i<=m; i++) scanf("%I64d",&special[i]);
}

void Solve()
{
    llong maxnum = k;
    int posdel = 0;
    while (posdel < m)
    {
        if (maxnum < special[posdel+1]) maxnum += k*((special[posdel+1]-maxnum)/k);
        if (maxnum < special[posdel+1]) maxnum += k;
        int posf = upper_bound(special.begin(),special.end(),maxnum )-special.begin()-1;
        maxnum += (posf-posdel);
        //m -= (posf-posdel);
        res++;
        posdel = posf;

    }
}

void Output()
{
    cout << res;
}

int main()
{
    Input();
    Solve();
    Output();
    return 0;
}