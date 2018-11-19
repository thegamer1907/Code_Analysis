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

string pw;
int n;
string str[110];
set<char> fi, se;

signed main()
{
    cin >> pw;
    cin >> n;
    REP(i,n) {
        cin >> str[i];
        fi.insert(str[i][0]);
        se.insert(str[i][1]);
    }

    REP(i,n) {
        if (pw == str[i]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    if (fi.find(pw[1]) != fi.end() && se.find(pw[0]) != se.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
