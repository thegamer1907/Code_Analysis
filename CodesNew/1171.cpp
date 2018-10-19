#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <numeric>
#include <stack>
#include <deque>
#include <memory.h>
#include <string>
#include <unordered_map>

#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define vI vector<int>
#define vvI vector<vector<int>>
#define vLL vector<ll>
#define vS vector<string>
#define fori(i, n) for(int (i)=0; (i)<n; (i)++)
#define forn(it,from,to) for(int (it)=from; (it)<to; (it)++)
#define forI(tmp) for(auto(it)=(tmp).begin();(it)!=(tmp).end();(it)++)
#define PI 3.14159265356
#define LD long double
#define sc(a) scanf("%d", &(a))
#define scc(a) scanf("%I64d", &(a))
#pragma comment (linker, "/STACK:5000000000")
typedef long long ll;
const ll mod = 1000000007;
int Inf = (int)2e9;
ll LINF = (ll)1e18 + 1e17;

using namespace std;





int main()
{
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int min_time = Inf, ans = -1;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        int k = x/n;
        int m = x % n;
        int t = k*n;
        if (m < i)
            t += i;
        else
            t += n + i;
        if (t < min_time)
        {
            min_time = t;
            ans = i;
        }
    }
    cout << ans;
	return 0;
}